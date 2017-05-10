#include <stdio.h>

int main(void)
{
        int a = 17, b = 4, c;

        c = a + b;
        printf("%d + %d = %d\n", a, b, c);
        c = a / b;
        printf("%d / %d = %d\n", a, b, c);
        c = a % b;
        printf("%d %% %d = %d\n", a, b, c);

        return 0;
}
