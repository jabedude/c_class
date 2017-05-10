#include <stdio.h>

int main(void)
{
        int i = 8;

        while (i > 0) {
                int j = 1;
                while (j < i) {
                        printf("%d ", j);
                        j++;
                }
                printf("\n");
                i--;
        }

        return 0;
}
