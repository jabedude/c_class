#include <stdio.h>

int main(void)
{
        for (int i = 1; i < 51; i++) {
                printf("%d ", i);
                if (i % 3 == 0)
                        printf("Fizz");
                if (i % 5 == 0)
                        printf("Buzz");
                printf("\n");
        }
        return 0;
}
