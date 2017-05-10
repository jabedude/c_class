#include <stdio.h>

long power(int base, int exponent);

int main(void)
{
        long int ans;
        int a, b;

        a = 3;
        b = 4;

        ans = power(a, b);
        printf("%d rasied to the %d power equals %ld\n", a, b, ans);

        return 0;
}

long power(int base, int exponent)
{
        long ret = (long) base;

        for (int i = 1; i < exponent; i++) {
                ret *= base;
        }

        return ret;
}
