/* Send kernel messages to a given console */
/* (Abbreviated version of setlogcons.c) */
#include <stdio.h>
#include <stdlib.h>
#include <sys/ioctl.h>

int main(int argc, char **argv){
        int cons;
        struct { char fn, subarg; } arg;

        if (argc == 2)
                cons = atoi(argv[1]);
        else
                cons = 0;       /* current console */

        arg.fn = 11;            /* redirect kernel messages */
        arg.subarg = cons;      /* to specified console */
        if (ioctl(0, TIOCLINUX, &arg)) {
                perror("TIOCLINUX");
                exit(1);
        }
        return 0;
}
