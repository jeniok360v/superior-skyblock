@echo off

mkdir ..\build
pushd ..\build
cd
cl /Zi /EHsc /std:c++17 ..\code\main.cpp user32.lib
popd

