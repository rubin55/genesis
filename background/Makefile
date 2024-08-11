export GDK ?= /opt/marsdev/m68k-elf
include $(GDK)/makefile.gen

out/run.sh: all
	echo "blastem rom.bin" > out/run.sh
	chmod +x out/run.sh
