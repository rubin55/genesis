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
  VDP_drawImageEx(BG_A, &fg, bt1, -50, 100, false, DMA);

  while (true) {
    SYS_doVBlankProcess();
  }

  return 0;
}
