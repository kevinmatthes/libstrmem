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
 * \author      Kevin Matthes
 * \brief       The main header of this library.
 * \copyright   GPL-3.0
 * \date        2023
 * \file        strmem.h
 * \note        See `LICENSE' for full license.
 *              See `README.md' for project details.
 */

/******************************************************************************/

/**
 * \brief   Prevent this header from being included twice.
 *
 * In case this header file should be included more than just once, unexpected
 * side effects might take place.  This unintended behaviour will be avoided by
 * the definition of this macro.
 */

#pragma once
#ifndef __STRMEM_H__
#define __STRMEM_H__



/**
 * \brief   This library's version.
 *
 * This constant holds the version of this library for future reference.
 */

extern const char * const strmem_version;



/**
 * \brief   Allocate memory for a new string.
 * \param   string   The string whose length shall be overtaken.
 * \returns The pointer to allocated memory region.
 *
 * This function will allocate for a new string.  In order to determine the
 * size of the requested memory region, the given string's length will be
 * used.  In order to honour the C convention of zero-termination, the size
 * of the given string will be incremented by one before being processed.
 *
 * The result of this function will be the pointer to the memory region which
 * was allocated.  In case that the allocation should fail, the result will be
 * `NULL`.
 */

extern char * stralloc (const char * const string);



#endif // ! __STRMEM_H__

/******************************************************************************/
