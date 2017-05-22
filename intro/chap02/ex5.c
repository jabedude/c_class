#include <stdio.h>

int sum_of_squares(int x, int y);
int is_right(int a, int b, int c);

int main(void)
{
        int side1 = 3, side2 = 4, side3 = 5;
        
        printf("%d, %d, and %d are ", side1, side2, side3);
        if (!is_right(side1, side2, side3))
                printf("NOT");
        printf("the sides of a right triangle\n");
        return 0;
}

int sum_of_squares(int x, int y)
{
        return (x * x) + (y * y);
}

int is_right(int a, int b, int c)
{
        if ( (c * c) == sum_of_squares(a, b))
                return 1;
        else
                return 0;
}
