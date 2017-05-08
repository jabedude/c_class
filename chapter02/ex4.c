#include <stdio.h>

int sum_of_squares(int x, int y);

int main(void)
{
        int a = 5, b = 6, c;

        c = sum_of_squares(a, b);
        printf("c = %d\n", c);
        return 0;
}

int sum_of_squares(int x, int y)
{
        return (x * x) + (y * y);
}
