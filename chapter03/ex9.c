#include <stdio.h>

int main(void)
{
        for (int i = 20; i < 61; i += 2) {
                int sq = i * i;
                int cube = i * i * i;

                printf("Number:\tSquare:\tCube:\t\n");
                printf("%d\t%d\t%d\n", i, sq, cube);
        }
        return 0;
}
