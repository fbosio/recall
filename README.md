# recall
Simple plugin made with JUCE that stores a path to an image file and displays it


## Install
### Windows
Run `Installers\Windows\install.bat`.

This script copies the standalone binary to your Desktop and the VST3 file to
one of the VST3 Locations (`Common Files\VST3`), which are defined 
[here](https://steinbergmedia.github.io/vst3_doc/vstinterfaces/vst3loc.html#winlocation).

### Linux
Run `Installers\Linux\install.sh`.

This script copies the standalone binary to your Desktop and the VST3 file to
one of the VST3 Locations (`~/.vst3`), which are defined 
[here](https://steinbergmedia.github.io/vst3_doc/vstinterfaces/vst3loc.html#linuxlocation).

## Uninstall
### Windows
Run `Installers\Windows\uninstall.bat`.

This script removes the standalone binary in your Desktop and the VST3 file in 
the VST3 Location defined [above](#install).
It also attempts to remove the VST3 folder, but it won't do it, unless the
folder is empty.

### Linux
Run `Installers\Linux\uninstall.sh`.

This script removes the standalone binary in your Desktop and the VST3 file in 
the VST3 Location defined [above](#install).
It also attempts to remove the VST3 folder, but it won't do it, unless the
folder is empty.
