#include <stdio.h>
#include <string.h>
#include <unistd.h>

int main()
{
    char *arg[] = {"usr/bin/sudo","-u","leandro","/usr/bin/gnome-calculator", NULL};
    execvp(arg[0], arg);
    return 0;
}

