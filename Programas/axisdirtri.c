#include <stdio.h>
#include <string.h>
#include <unistd.h>

int main()
{
    char *arg[] = { "/usr/bin/xdotool","key","alt+F4", NULL };
    execvp(arg[0], arg);
    return 0;
}
