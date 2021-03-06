/*
 *  utils_x11.h - X11 utilities
 *
 *  hwdecode-demos (C) 2009-2010 Splitted-Desktop Systems
 *
 *  This program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; either version 2 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program; if not, write to the Free Software
 *  Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301, USA
 */

#ifndef UTILS_X11_H
#define UTILS_X11_H

#include <X11/Xlib.h>

void x11_trap_errors(void);
int x11_untrap_errors(void);

int
x11_get_geometry(
    Display      *dpy,
    Drawable      drawable,
    int          *px,
    int          *py,
    unsigned int *pwidth,
    unsigned int *pheight
);

void x11_wait_event(Display *dpy, Window w, int type);

void
x11_draw_rectangle(
    Display     *dpy,
    Drawable     drawable,
    int          x,
    int          y,
    unsigned int width,
    unsigned int height,
    unsigned int color
);

#endif /* UTILS_X11_H */
