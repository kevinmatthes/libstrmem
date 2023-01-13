/*********************** GNU General Public License 3.0 ***********************\
|                                                                              |
|  Copyright (C) 2023 Kevin Matthes                                            |
|                                                                              |
|  This program is free software: you can redistribute it and/or modify        |
|  it under the terms of the GNU General Public License as published by        |
|  the Free Software Foundation, either version 3 of the License, or           |
|  (at your option) any later version.                                         |
|                                                                              |
|  This program is distributed in the hope that it will be useful,             |
|  but WITHOUT ANY WARRANTY; without even the implied warranty of              |
|  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the               |
|  GNU General Public License for more details.                                |
|                                                                              |
|  You should have received a copy of the GNU General Public License           |
|  along with this program.  If not, see <https://www.gnu.org/licenses/>.      |
|                                                                              |
\******************************************************************************/

/**
 * \file valgrind.c
 */

/******************************************************************************/

#include <stdlib.h>
#include "../src/strmem.h"

/**
 * \author      Kevin Matthes
 * \brief       The memory management check.
 * \copyright   GPL-3.0
 * \date        2023
 * \returns     Zero.
 *
 * This is the main function to be analysed by Valgrind in order to check the
 * memory management of the library functions.
 */

int main (void)
{
  char * const buffer_1 = stralloc ("valgrind");
  char * const buffer_2 = strldmalloc ("another text");

  free (buffer_1);
  free (buffer_2);

  return 0;
}

/******************************************************************************/
