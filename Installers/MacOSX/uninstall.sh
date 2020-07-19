#!/bin/sh
app=Recall_Linux_DBG
rm "~/Desktop/$app.app"
plugins="$HOME/Library/Audio/Plug-Ins"
rm -r $plugins/VST3/$app.vst3
rmdir $plugins/VST3/
rm -r $plugins/Components/$app.component
rmdir $plugins/Components/
