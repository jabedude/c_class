#include <stdio.h>

int main(void)
{
        int sum = 0;

        for (int i = 0; i < 101; i++) {
                if (i % 5 == 0)
                        sum += i;
        }
        printf("%d\n", sum);
        return 0;
}
