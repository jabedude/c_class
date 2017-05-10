#include <stdio.h>

int main(void)
{
        for (int i = 1; i < 8; i++) {
                printf("%d", i);
                for (int j = i - 1; j > 0; j--)
                        printf("%d", j);
                printf("\n");
        }
        return 0;
}
