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
 * \file similarity.c
 */

/******************************************************************************/

#include <stdlib.h>
#include <string.h>
#include "../src/strmem.h"

/**
 * \author      Kevin Matthes
 * \brief       The similarity check.
 * \copyright   GPL-3.0
 * \date        2023
 * \returns     The count of differences between the copy and the original.
 *
 * This is the main function to test whether the copied string equals the
 * original.
 */

int main (void)
{
  const char * const  test_string = "This is the test string to copy.";
  char * const        buffer      = stralloc (test_string);
  const int           differences = strcmp (test_string, buffer);

  free (buffer);

  return differences;
}

/******************************************************************************/
