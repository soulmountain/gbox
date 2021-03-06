/*!The Graphic Box Library
 * 
 * GBox is free software; you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License as published by
 * the Free Software Foundation; either version 2.1 of the License, or
 * (at your option) any later version.
 * 
 * GBox is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU Lesser General Public License for more details.
 * 
 * You should have received a copy of the GNU Lesser General Public License
 * along with GBox; 
 * If not, see <a href="http://www.gnu.org/licenses/"> http://www.gnu.org/licenses/</a>
 * 
 * Copyright (C) 2014 - 2015, ruki All rights reserved.
 *
 * @author      ruki
 * @file        rect.h
 * @ingroup     core
 *
 */
#ifndef GB_CORE_PREFIX_RECT_H
#define GB_CORE_PREFIX_RECT_H

/* //////////////////////////////////////////////////////////////////////////////////////
 * includes
 */
#include "type.h"

/* //////////////////////////////////////////////////////////////////////////////////////
 * extern
 */
__tb_extern_c_enter__

/* //////////////////////////////////////////////////////////////////////////////////////
 * interfaces
 */

/*! make rect
 *
 * @param rect      the rect
 * @param x         the x
 * @param y         the y
 * @param w         the width
 * @param h         the height
 *
 */
tb_void_t           gb_rect_make(gb_rect_ref_t rect, gb_float_t x, gb_float_t y, gb_float_t w, gb_float_t h);

/*! make rect with the integer value
 *
 * @param rect      the rect
 * @param x         the x
 * @param y         the y
 * @param w         the width
 * @param h         the height
 *
 */
tb_void_t           gb_rect_imake(gb_rect_ref_t rect, tb_long_t x, tb_long_t y, tb_size_t w, tb_size_t h);

/*! apply matrix to rect
 *
 * @param rect      the rect 
 * @param matrix    the matrix
 */
tb_void_t           gb_rect_apply(gb_rect_ref_t rect, gb_matrix_ref_t matrix);

/*! apply matrix to rect
 *
 * @param rect      the rect 
 * @param applied   the applied rect 
 * @param matrix    the matrix
 */
tb_void_t           gb_rect_apply2(gb_rect_ref_t rect, gb_rect_ref_t applied, gb_matrix_ref_t matrix);

/*! inflate rect
 *
 * @param rect      the rect 
 * @param dx        the x-delta value and must be larger than zero
 * @param dy        the x-delta value and must be larger than zero
 */
tb_void_t           gb_rect_inflate(gb_rect_ref_t rect, gb_float_t dx, gb_float_t dy);

/*! deflate rect
 *
 * @param rect      the rect 
 * @param dx        the x-delta value and must be smaller than zero
 * @param dy        the x-delta value and must be smaller than zero
 */
tb_void_t           gb_rect_deflate(gb_rect_ref_t rect, gb_float_t dx, gb_float_t dy);

/* //////////////////////////////////////////////////////////////////////////////////////
 * extern
 */
__tb_extern_c_leave__

#endif
