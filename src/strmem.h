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
 * \file strmem.h
 */

/******************************************************************************/

/**
 * \author      Kevin Matthes
 * \brief       Prevent this header from being included twice.
 * \copyright   GPL-3.0
 * \date        2023
 *
 * In case this header file should be included more than just once, unexpected
 * side effects might take place.  This unintended behaviour will be avoided by
 * the definition of this macro.
 */

#pragma once
#ifndef __STRMEM_H__
#define __STRMEM_H__

#include <stdbool.h>
#include <stddef.h>
#include <stdlib.h>
#include <string.h>



/**
 * \author      Kevin Matthes
 * \brief       This library's version.
 * \copyright   GPL-3.0
 * \date        2023
 *
 * This constant holds the version of this library for future reference.
 */

extern const char * const strmem_version;



/**
 * \author      Kevin Matthes
 * \brief       Create a deep copy of the given string.
 * \copyright   GPL-3.0
 * \date        2023
 * \param       string   The string to create a deep copy from.
 * \returns     The pointer to allocated memory region.
 *
 * This function will create a deep copy of the given string.  As a result, a
 * pointer to the allocated memory region will be returned.  If the allocation
 * should fail for some reasons, `NULL` will be returned instead.
 *
 * The name `stralloc` originates from its purpose, the ***alloc***ation of
 * ***str***ings.
 */

extern char * stralloc (const char * const string);



/**
 * \author      Kevin Matthes
 * \brief       Check whether the two given strings are identical.
 * \copyright   GPL-3.0
 * \date        2023
 * \param       a   The first string to compare.
 * \param       b   The second string to compare.
 * \returns     Whether `a` and `b` are identical.
 *
 * Two strings are identical if and only if they both are of the same length
 * and both contain exactly the same characters.
 *
 * This function is part of this library as the string identity comparison
 * also contains a memory aspect:  what if at least one of the strings to
 * compare is `NULL`?  This function will consider two `NULL`s identical as
 * they share their address.  If only one string is `NULL`, the result is
 * immediately `false`.
 *
 * The name `strid` originates from its purpose, the ***id***entity check for
 * two given ***str***ings.
 */

extern bool strid (const char * const a, const char * const b);



/**
 * \author      Kevin Matthes
 * \brief       Allocate memory for a new string.
 * \copyright   GPL-3.0
 * \date        2023
 * \param       string   The string whose length shall be overtaken.
 * \returns     The pointer to allocated memory region.
 *
 * This function will allocate memory for a new string.  This is a utility
 * function to be called by `stralloc` in order to create a deep copy of the
 * given string.
 *
 * The memory region to be allocated will have a size of the length of the
 * given string plus one.  The size of the given string is determined by its
 * count of printable characters.  In order to match the C convention of string
 * termination by zero, an extra character slot needs to be allocated, as well.
 *
 * The result of this function will be the pointer to the memory region which
 * was allocated.  In case that the allocation should fail, the result will be
 * `NULL`.
 *
 * The name `strldmalloc` originates from its purpose, the ***m***emory
 * ***alloc***ation for ***str***ings with after a preceding ***l***ength
 * ***d***etermination.
 */

extern char * strldmalloc (const char * const string);



#endif // ! __STRMEM_H__

/******************************************************************************/
