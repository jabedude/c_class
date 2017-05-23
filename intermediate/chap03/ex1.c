#include <stdio.h>

int
add(int a, int b);

int
main(void)
{
    int i;

    i = add(7, 7);
    printf("i is is %d\n", i);

    return 0;
}

int
add(int a, int b)
{
    static int sum = 0;
    sum++;
    if (a > 1)
    {
        return add(a - 1, b);
    }
    else if (a < b)
    {
        return add(b, a - 1);
    }
    else
    {
        return sum;
    }
}
