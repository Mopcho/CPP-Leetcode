@echo off

rem Source directory containing the .o files
set "source_dir=src"

rem Destination directory to move the .o files
set "destination_dir=build"

rem Create the build directory if it doesn't exist
mkdir "%destination_dir%" 2>nul

rem Compile each source file into its corresponding object file
g++ -Wall -g -c "%source_dir%\*.cpp"

rem Move all .o files from the source directory to the destination directory
move ".\*.o" "%destination_dir%"

rem Link all object files to create the executable
g++ "%destination_dir%\*.o" -o "%destination_dir%\app.exe"

rem Optionally, clean up object files after linking
rem del /Q build\*.o
