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
 * @file        line.h
 * @ingroup     core
 *
 */
#ifndef GB_CORE_DEVICE_BITMAP_RENDER_FILL_LINE_H
#define GB_CORE_DEVICE_BITMAP_RENDER_FILL_LINE_H

/* //////////////////////////////////////////////////////////////////////////////////////
 * includes
 */
#include "prefix.h"

/* //////////////////////////////////////////////////////////////////////////////////////
 * extern
 */
__tb_extern_c_enter__

/* //////////////////////////////////////////////////////////////////////////////////////
 * interface
 */

/* init the line
 *
 * @param device    the device
 * @param bounds    the bounds
 *
 * @return          tb_true or tb_false
 */
tb_bool_t           gb_bitmap_render_fill_line_init(gb_bitmap_device_ref_t device, gb_rect_ref_t bounds);

/* exit the line
 *
 * @param device    the device
 */
tb_void_t           gb_bitmap_render_fill_line_exit(gb_bitmap_device_ref_t device);

/* done the line
 *
 * @param device    the device
 * @param start     the start x-coordinate
 * @param count     the filled pixel count
 */
tb_void_t           gb_bitmap_render_fill_line_done(gb_bitmap_device_ref_t device, tb_size_t start, tb_size_t count, tb_byte_t* pixels);

/* //////////////////////////////////////////////////////////////////////////////////////
 * extern
 */
__tb_extern_c_leave__
#endif