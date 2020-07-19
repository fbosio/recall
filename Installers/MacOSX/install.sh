#!/bin/sh
build="../../Builds/MacOSX/build/Debug"
app=Recall_Linux_DBG
cp $build/$app.app ~/Desktop/
plugins="$HOME/Library/Audio/Plug-Ins"
mkdir -p $plugins/VST3/
cp -r -t $plugins/VST3/ $build/$app.vst3
mkdir -p $plugins/Components/
cp -r -t $plugins/Components/ $build/$app.component
