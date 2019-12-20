#!/bin/bash


/u/Open-Q_845_Android-O_v1.0/tool/fastboot set_active=b
/u/Open-Q_845_Android-O_v1.0/tool/fastboot getvar all

/u/Open-Q_845_Android-O_v1.0/tool/fastboot flash boot_b boot.img
/u/Open-Q_845_Android-O_v1.0/tool/fastboot flash system_b system.img
/u/Open-Q_845_Android-O_v1.0/tool/fastboot flash vendor_b vendor.img
/u/Open-Q_845_Android-O_v1.0/tool/fastboot flash dtbo_b dtbo.img

/u/Open-Q_845_Android-O_v1.0/tool/fastboot set_active=b
/u/Open-Q_845_Android-O_v1.0/tool/fastboot getvar all

#fastboot reboot

