#include <stdio.h>

int
main(int argc, char **argv)
{
    char *c;

    for (int i = 1; i < argc; i++) {
        c = argv[i];
        while (*c)
            putchar(*c++ + 1);
        putchar('\n');
    }

    return 0;
}
