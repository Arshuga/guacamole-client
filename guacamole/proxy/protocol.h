
#ifndef __PROTOCOL_H
#define __PROTOCOL_H

#include <png.h>

#include "guacio.h"

char* guac_escape_string(const char* str);
void guac_send_name(GUACIO* io, const char* name);
void guac_send_size(GUACIO* io, int w, int h);
void guac_send_copy(GUACIO* io, int srcx, int srcy, int w, int h, int dstx, int dsty);
void guac_send_png(GUACIO* io, int x, int y, png_byte** png_rows, int w, int h);

#endif
