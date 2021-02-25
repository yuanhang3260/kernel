#!/bin/bash

make && objdump -dxs kernel > ./objdump.txt
./update_image.sh && ./run_kernel.sh