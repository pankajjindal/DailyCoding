#include <stdio.h>
#include <sys/sysctl.h>

#define SIZE(a) (sizeof(a)/sizeof((a)[0]))

int name[] = { CTL_KERN, KERN_PRINTK };
int printk_params[4];
int new_params[4];

int main(int argc, char **argv) {
        int paramlth = sizeof(printk_params);

        if (argc == 1) {
                /* report */
                if (sysctl(name, SIZE(name),
                           printk_params, &paramlth, 0, 0)) {
                        perror("sysctl");
                        exit(1);
                }
                printf("got %d bytes:\n", paramlth);
                printf("console_loglevel: %d\n", printk_params[0]);
                printf("default_message_loglevel: %d\n", printk_params[1]);
                printf("minimum_console_loglevel: %d\n", printk_params[2]);
                printf("default_console_loglevel: %d\n", printk_params[3]);
        } else if (argc == 5) {
                int i;

                for (i=0; i<4; i++)
                        new_params[i] = atoi(argv[i+1]);
                /* set */
                if (sysctl(name, SIZE(name),
                           0, 0, new_params, sizeof(new_params))) {
                        perror("sysctl");
                        exit(1);
                }
                printf("set new printk parameters\n");
        } else {
                fprintf(stderr, "Call: %s [N N N N]\n", argv[0]);
                exit(1);
        }
        return 0;
}
