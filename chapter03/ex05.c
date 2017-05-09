#include <stdio.h>

int main(void)
{
        int sum = 0, i = 0;

        while (i < 101) {
                sum += i;
                i++;
        }
        printf("%d\n", sum);
        return 0;
}
