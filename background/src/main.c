#include <genesis.h>
#include "resources.h"

int main() {
  u16 ind = TILE_USER_INDEX;
  PAL_setPalette(PAL0, bg.palette->data, DMA);
  VDP_drawImageEx(BG_B, &bg, TILE_ATTR_FULL(PAL0, FALSE, FALSE, FALSE, ind), 0, 0, FALSE, TRUE);

  while(TRUE) {
    SYS_doVBlankProcess();
  }

  return 0;
}
