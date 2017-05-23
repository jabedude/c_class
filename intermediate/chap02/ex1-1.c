#include <stdio.h>

int sum(int a, int b);

int
main(int argc, char *argv[])
{
    int i = 3;

    i = sum(i, i);
    printf("i is %d\n", i);
    return 0;
}
