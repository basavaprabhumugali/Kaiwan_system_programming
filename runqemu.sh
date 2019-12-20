#!/bin/sh

KERNEL_BZ_PATH="/u/linux/arch/x86/boot/bzImage"
qemu-system-x86_64 -kernel ${KERNEL_BZ_PATH}  -initrd initramfs.igz -serial  stdio -append "console=ttyS0,115200 "
