@echo off
setlocal enabledelayedexpansion


g++ main.cpp -o main > nul
main > Test\output1.txt
fc Test\output1.txt Test\expected1.txt > nul
if errorlevel 1 (
    echo Test 1: FAIL
) else (
    echo Test 1: PASS
)
fc Test\output2.txt Test\expected2.txt > nul
if errorlevel 1 (
    echo Test 2: FAIL
) else (
    echo Test 2: PASS
)
