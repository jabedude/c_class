#include <stdio.h>

void put(int val, int pos);
int get(int pos);

int
main(int argc, char *argv[])
{
    int x;
    put(10, 5);
    x = get(5);

    printf("x is %d\n", x);
    return 0;
}

