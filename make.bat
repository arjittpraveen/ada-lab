@echo off
if "%1"=="" (
    echo Usage: make filename
    exit /b 1
)
g++ %1.cpp -o bin\%1.exe
