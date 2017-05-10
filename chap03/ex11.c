#include <stdio.h>

int main(void)
{
        int i = 1;
        int fact = 1;

        while (i < 11) {
                fact *= i;
                i++;
        }
        printf("%d\n", fact);
        return 0;
}
