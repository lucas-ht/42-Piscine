#!/bin/sh
a=`echo $FT_NBR1 | sed 'y/'\''\\"?!/01234/'`
b=`echo $FT_NBR2 | sed 'y/mrdoc/01234/'`
echo "obase=13; ibase=5; $a+$b" | bc -l | sed 'y/0123456789ABC/gtaio luSnemf/'
