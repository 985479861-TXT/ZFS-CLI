# ZFS-CLI
ZFS is a command line utility made for windows. It's made in C so, it's really fast

# Compilation
Edit the path in the zfs.c as guided. Then write "gcc zfs.c -o zfs" in the command line.

WARNING: C must be installed on the system (GCC recommended).

# Config / Installation
After compiling make a folder in "C:\" named bin, and move the zfs.exe to the path "C:\bin\". Then open "edit the system environment variables" from the windows start menu. click on environment variables then Path from the above section. Click on edit<new then paste "C:\bin".

# Usage

zfs [option] [name]

* options:
  * -w => for web
  * -f => for files and folders
  * -t => for tools

* names:
  * for -w:
    * leave blank for web browzer
    * gh => github
    * yt => youtube
    * ai => gemini

  * for -f (not edited):
    * leave blank for file explorer
    * py => python projects folder
    * web => web development folder
    * c => C projects folder

  * for -t (also not edited):
    * ch => cheat engine
