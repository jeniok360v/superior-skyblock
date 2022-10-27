@echo off

mkdir ..\build
pushd ..\build
cd
cl /Zi /EHsc /std:c++17 /I code\ ..\code\main.cpp ..\code\Mission.cpp & :: ..\code\MissionPackager.cpp
popd

