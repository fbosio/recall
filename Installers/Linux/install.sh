#!/bin/sh
build="../../Builds/LinuxMakefile/build"
app=Recall_Linux_DBG
cp $build/$app "$HOME/Desktop/"
mkdir -p "$HOME/.vst3/"
cp -r -t "$HOME/.vst3/" $build/$app.vst3
