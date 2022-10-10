@echo off

mkdir ..\build
pushd ..\build
cd
cl /Zi /EHsc /std:c++17 ..\code\main.cpp ..\code\Mission.cpp
popd

