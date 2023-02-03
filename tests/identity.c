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
 * \file identity.c
 */

/******************************************************************************/

#include <stddef.h>
#include <sysexits.h>
#include "../src/strmem.h"

/**
 * \author      Kevin Matthes
 * \brief       The identity check.
 * \copyright   GPL-3.0
 * \date        2023
 * \returns     0, if the checks succeed, or 70, else.
 *
 * This is the main function to test whether the library function for string
 * identity works as expected.
 */

int main (void)
{
  const char * const text_1 = "text 1";
  const char * const text_2 = "text 2";
  const char * const text_3 = "";
  const char * const text_4 = NULL;

  if (! strid (text_1, text_1)) exit (EX_SOFTWARE);
  if (! strid (text_2, text_2)) exit (EX_SOFTWARE);
  if (! strid (text_3, text_3)) exit (EX_SOFTWARE);
  if (! strid (text_4, text_4)) exit (EX_SOFTWARE);

  if (strid (text_1, text_2)) exit (EX_SOFTWARE);
  if (strid (text_1, text_3)) exit (EX_SOFTWARE);
  if (strid (text_1, text_4)) exit (EX_SOFTWARE);
  if (strid (text_2, text_1)) exit (EX_SOFTWARE);
  if (strid (text_2, text_3)) exit (EX_SOFTWARE);
  if (strid (text_2, text_4)) exit (EX_SOFTWARE);
  if (strid (text_3, text_1)) exit (EX_SOFTWARE);
  if (strid (text_3, text_2)) exit (EX_SOFTWARE);
  if (strid (text_3, text_4)) exit (EX_SOFTWARE);
  if (strid (text_4, text_1)) exit (EX_SOFTWARE);
  if (strid (text_4, text_2)) exit (EX_SOFTWARE);
  if (strid (text_4, text_3)) exit (EX_SOFTWARE);

  return 0;
}

/******************************************************************************/
