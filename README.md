# recall
Simple plugin made with JUCE that stores a path to an image file and displays it

## Windows
### Standalone
Run  `Builds\VisualStudio2015\x64\Debug\Standalone Plugin\Recall_Windows_DBG.exe`
### VST3
Copy `Builds\VisualStudio2015\x64\Debug\VST3\Recall_Windows_DBG.vst3` to
```powershell
$Env:CommonProgramFiles\VST3\
```
where `$Env:CommonProgramFiles`
is your `Common Files` folder path (usually `C:\Program Files\Common Files`).
## Linux
### Standalone
Run from shell: `Builds\LinuxMakefile\build\Recall_DBG`
### VST3
Copy  `Builds\LinuxMakefile\build\Recall_DBG\Recall_DBG.vst3` to
```bash
~/.vst3/
```
