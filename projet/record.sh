#!/bin/sh
export SM_DISABLE_ANALYSIS=true
./configure
unset SM_DISABLE_ANALYSIS
./make
