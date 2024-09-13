# Genesis

This repository contains various learnings and experiments related to developing
for the Sega Genesis/MegaDrive. Each directory is its own project.

## Notes

* I'm using `marsdev` as the toolchain;
* The native resolution is 320x224px (ntsc), 320x240 (pal)
* Fundamental VDP building blocks are tiles, 8x8px blocks
* The VDP backgrounds are 512x256px (64x32 tiles)
* Tiles can only make use of 1 of 4 palette lines at a time
* Each palette line has 16 color entries.
* The 1st color entry is reserved for the transparent color,
* Transparent color is usually solid purple #FF00FF.
