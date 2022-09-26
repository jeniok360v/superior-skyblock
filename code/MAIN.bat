@echo off

mkdir ..\build
pushd ..\build
cd
cl /Zi ..\code\main.cpp user32.lib
popd

