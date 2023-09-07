#!/bin/bash
wget -P /tmp https://github.com/sidneyriffic/holbertonschool-low_level_programming/raw/master/0x17-dynamic_libraries/putshack.so
export LD_PRELOAD=/tmp/putshack.so
# wget -P /tmp https://github.com/alx-tools/0x18.c/raw/master/101-md5_gm/putshack.so
# export LD_PRELOAD=/tmp/putshack.so
