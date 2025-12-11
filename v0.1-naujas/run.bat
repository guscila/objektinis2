@echo off
if not exist build mkdir build
cd build
cmake -DCMAKE_BUILD_TYPE=Release ..
cmake --build . --config Release
if exist .\v2.0.exe (.\v2.0.exe %*) else (.\Release\v2.0.exe %*)
pause
