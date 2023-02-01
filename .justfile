######################## GNU General Public License 3.0 ########################
##                                                                            ##
## Copyright (C) 2023 Kevin Matthes                                           ##
##                                                                            ##
## This program is free software: you can redistribute it and/or modify       ##
## it under the terms of the GNU General Public License as published by       ##
## the Free Software Foundation, either version 3 of the License, or          ##
## (at your option) any later version.                                        ##
##                                                                            ##
## This program is distributed in the hope that it will be useful,            ##
## but WITHOUT ANY WARRANTY; without even the implied warranty of             ##
## MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the              ##
## GNU General Public License for more details.                               ##
##                                                                            ##
## You should have received a copy of the GNU General Public License          ##
## along with this program.  If not, see <https://www.gnu.org/licenses/>.     ##
##                                                                            ##
################################################################################

################################################################################
##
##  AUTHOR      Kevin Matthes
##  BRIEF       The build instructions for this project.
##  COPYRIGHT   GPL-3.0
##  DATE        2023
##  FILE        .justfile
##  NOTE        See `LICENSE' for full license.
##              See `README.md' for project details.
##
################################################################################

# Abbreviations of the build recipe names.
alias b := build



# Flags.
cflags   := '-std=c99 -Wall -Werror -Wextra -Wpedantic'
libflags := '-c -fPIC'

# Flag composition.
c99lib := libflags + ' ' + cflags

# Compilation targets.
library := 'libstrmem.a'



# Build the target library.
@build:
  just compile src/constants.c
  just compile src/stralloc.c
  just compile src/strldmalloc.c

# Compile a single source file and add it to the target library.
@compile file:
  gcc {{ c99lib }} {{ file }}
  ar rs {{ library }} *.o
  rm -rf *.o

################################################################################
