#include <stdio.h>

int main(void)
{
        int i;

        for (i = -4; i <= 4; i++) {
                printf("%d is ", i);
                if (i < 0)
                        printf("negative and ");
                else
                        printf("positive and ");

                if (i % 2)
                        printf("even\n");
                else
                        printf("odd\n");
        }
        return 0;
}
