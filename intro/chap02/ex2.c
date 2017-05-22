#include <stdio.h>

int main(void)
{
        int x = 5, y = 10, r = 7, z = 12;

        x = x + y++;
        printf("%d %d\n", x, y);

        r += ++z;
        printf("%d %d\n", r, z);

        return 0;
}
