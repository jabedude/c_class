#include <stdio.h>

#include "8-2-complex.h"

int main(void)
{
    COMPLEX comp = init(5, 9);
    COMPLEX cmp = init(4, 8);
    print(&comp);
    print(&cmp);

    COMPLEX ret;
    ret = add(&comp, &cmp);
    print(&ret);
    return 0;
}

COMPLEX init(int one, int two)
{
    COMPLEX tmp;
    tmp.a = one;
    tmp.b = two;
    return tmp;
}

COMPLEX add(COMPLEX *one, COMPLEX *two)
{
    COMPLEX tmp;
    tmp.a = one->a + two->a;
    tmp.b = one->b + two->b;
    return tmp;
}

void print(COMPLEX *cmp)
{
    printf("%d + %di\n", cmp->a, cmp->b);
}
