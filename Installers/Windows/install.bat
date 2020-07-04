@ECHO OFF
MKDIR "%CommonProgramFiles%\VST3"
SET BUILD=..\..\Builds\VisualStudio2015\x64\Debug\
SET APP=Recall_Windows_DBG
COPY /Y "%BUILD%\Standalone Plugin\%APP%.exe" "%USERPROFILE%\Desktop"
COPY /Y "%BUILD%\VST3\%APP%.vst3" "%CommonProgramFiles%\VST3"