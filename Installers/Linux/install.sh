#!/bin/sh
build=../../Builds/LinuxMakefile/build
app=Recall_Linux_DBG
cp $build/$app ~/Desktop/
mkdir -p ~/.vst3/
cp -r -t ~/.vst3/ $build/$app.vst3 
