@echo off

call "C:\Program Files (x86)\Microsoft Visual Studio\2017\Enterprise\VC\Auxiliary\Build\vcvarsall.bat" x64

set compilerflags=/Od /Zi /EHsc

set linkerflags=/OUT:run.exe

e:

cd "E:\99_Code\primer\010"

cl.exe %compilerflags% 10.cpp /link %linkerflags%