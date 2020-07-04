@ECHO OFF
SET APP=Recall_Windows_DBG
DEL "%USERPROFILE%\Desktop\%APP%.exe"
DEL "%CommonProgramFiles%\VST3\%APP%.vst3"
RMDIR "%CommonProgramFiles%\VST3"