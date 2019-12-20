#!/bin/sh

 qemu-system-x86_64 --kernel /u/linux/arch/x86/boot/bzImage --initrd initramfs.igz -serial /dev/pts/27 -append "console=ttyS0,115200 "

