#include <stdio.h>
#include <string.h>
#include <unistd.h>

int main()
{
    char *arg[] = { "/usr/bin/sudo","-u","leandro","/usr/bin/xdotool","key","ctrl+alt+l", NULL };
    execvp(arg[0], arg);
    return 0;}
