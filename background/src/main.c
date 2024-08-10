#include <genesis.h>

#include "resources.h"

int main() {
  u16 ind = TILE_USER_INDEX;
  PAL_setPalette(PAL0, bg.palette->data, DMA);
  VDP_drawImageEx(BG_B,
                  &bg,
                  TILE_ATTR_FULL(PAL0, false, false, false, ind),
                  0,
                  0,
                  false,
                  DMA);

  while (true) {
    SYS_doVBlankProcess();
  }

  return 0;
}
