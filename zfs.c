#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>

void wr(char prog[]){
    ShellExecute(NULL, "open", prog,
                     "shell:::{2559a1f3-21d7-11d4-bdaf-00c04f60b9f0}",
                      NULL, SW_SHOWNORMAL);
}

int main(int argc, char *argv[]){
    for (int i = 1; i < argc; i++){

        //for web
        if (strcmp(argv[i], "-w") == 0){ //check arg -w
            if (i + 1 < argc){ // check post msg
                char *ws = argv[++i];
                if (strcmp(ws, "yt") == 0){// yt
                    wr("http://youtube.com");
                }
                else if (strcmp(ws, "ai") == 0){ // ai
                   wr("http://gemini.google.com/app");
                }
                else if (strcmp(ws, "gh") == 0){
                    wr("http://github.com");
                }
                
            } 
            else{ // if no args, firefox
                wr("firefox"); // ** edit to Edge or Chrome for your fav browser
            }
        }

        //for dirs
        else if (strcmp(argv[i], "-f") == 0){
            if (i + 1 < argc){ // check post msg
                char *ws = argv[++i];
                if (strcmp(ws, "py") == 0){// py
                    wr("C:/Users/DELL/Documents/python"); // ** edit the path 
                }
                else if (strcmp(ws, "c") == 0){ // c
                    wr("C:/Users/DELL/Desktop/C"); // ** edit the path
                }
                else if (strcmp(ws, "web") == 0){
                    wr("D:/html"); // ** edit the path
                }
                
            } 
            else{ // if no args, fs(ls irl)
                wr("explorer");
            }
        }
        
        // tools
        else if (strcmp(argv[i], "-t") == 0){
            if (i + 1 < argc){ // check post msg
                char *ws = argv[++i];
                if (strcmp(ws, "ch") == 0){// py
                    wr("C:/Program Files/Cheat Engine/Cheat Engine.exe"); // ** edit the paths
                }
                else if (strcmp(ws, "mc") == 0){ // c
                    wr("C:/Users/DELL/AppData/Roaming/sklauncher/jre/bin/javaw.exe"); // ** edit the paths
                }
                else if (strcmp(ws, "zm") == 0){
                    wr("C:/Program Files (x86)/Nmap/zenmap/bin/pythonw.exe"); // ** edit the paths
                }
                else if (strcmp(ws, "pm") == 0){
                    wr("C:/Users/DELL/AppData/Local/Postman/Postman.exe"); // ** edit the paths
                }
                else if (strcmp(ws, "vm") == 0){
                    wr("C:/Program Files/Oracle/VirtualBox/VirtualBox.exe"); // ** edit the paths
                }
                else if (strcmp(ws, "gm") == 0) {
                    wr("C:/Program Files/glzr.io/GlazeWM/glazewm.exe"); // ** edit the paths
                }
                
            } 
            else{ // if no args, task manager(CPU 100%)
                wr("taskmgr");
            }
        }
    }

    return 0;
}
