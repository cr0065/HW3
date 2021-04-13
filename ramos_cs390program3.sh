#!/bin/bash

while read input  
do
        echo $input
        sed -i 's/unsigned char\s/CS390_UCHAR32/g' $input
        sed -i 's/unsigned short\s/CS390_UINT16/g' $input
        sed -i 's/unsigned int\s/CS390_UINT32/g' $input
	sed -i 's/char/CS390_CHAR/g' $input
        sed -i 's/short/CS390_INT16/g' $input
        sed -i 's/int/CS390_INT32/g' $input
        sed -i 's/float/CS390_FLOAT32/g' $input
        sed -i 's/double/CS390_FLOAT64/g' $input
        sed -i 's/bool/CS390_BOOL/g' $input

        #Pointer characters
        sed -i 's/char\*\s/CS390_CHAR\*/g' $input
        sed -i 's/\sunsigned\schar\*\s/CS390_UCHAR32\*/g' $input
        sed -i 's/\sunsigned\sshort\*\s/CS390_UINT16\*/g' $input
        sed -i 's/\sunsigned\sint\*\s/CS390_UINT32\*/g' $input
        sed -i 's/short\*\s/CS390_INT16\*/g' $input
        sed -i 's/int\*\s/CS390_INT32\*/g' $input
        sed -i 's/float\*\s/CS390_FLOAT32\*/g' $input
        sed -i 's/double\*\s/CS390_FLOAT64\*/g' $input
        sed -i 's/bool\*\s/CS390_BOOL\*/g' $input

        #anyother special characters that might be used
        sed -i 's/char/CS390_CHAR\W\*/g' $input
        sed -i 's/\sunsigned\schar\W\*/CS390_UCHAR32\*/g' $input
        sed -i 's/\sunsigned\sshort\W\*/CS390_UINT16\*/g' $input
        sed -i 's/\sunsigned\sint\W\*/CS390_UINT32\*/g' $input
        sed -i 's/short\W\*/CS390_INT16\*/g' $input
        sed -i 's/int\W\*/CS390_INT32\*/g' $input
        sed -i 's/float\W\*/CS390_FLOAT32\*/g' $input
        sed -i 's/double\W\*/CS390_FLOAT64\*/g' $input
        sed -i 's/bool\W\*/CS390_BOOL\*/g' $input
done
