#include <genesis.h>

#include "resources.h"

int main() {
  u16 ind = TILE_USER_INDEX;

  PAL_setPalette(PAL0, bg.palette->data, DMA);
  u16 bt0 = TILE_ATTR_FULL(PAL0, false, false, false, ind);
  VDP_drawImageEx(BG_B, &bg, bt0, 0, 0, false, DMA);
  ind += bg.tileset->numTile;

  PAL_setPalette(PAL1, fg.palette->data, DMA);
  u16 bt1 = TILE_ATTR_FULL(PAL1, false, false, false, ind);
  VDP_drawImageEx(BG_A, &fg, bt1, 10, 10, false, DMA);
  ind += fg.tileset->numTile;

  VDP_setScrollingMode(HSCROLL_PLANE, VSCROLL_PLANE);

  int bg_hscroll_offset = 0;
  int fg_hscroll_offset = 0;

  while (true) {
    VDP_setHorizontalScroll(BG_B, bg_hscroll_offset);
    bg_hscroll_offset -= 1;
    VDP_setHorizontalScroll(BG_A, fg_hscroll_offset);
    fg_hscroll_offset -= 2;
    SYS_doVBlankProcess();
  }

  return 0;
}
