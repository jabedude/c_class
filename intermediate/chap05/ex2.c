#include <stdio.h>

void
sort3(int *ptr1, int *ptr2, int *ptr3);

int
main(void)
{
    int a = 7, b = 2, c = 4;
    sort3(&a, &b, &c);
    printf("After: a = %d\tb = %d\tc = %d\n", a, b, c);
    return 0;
}

void
sort3(int *ptr1, int *ptr2, int *ptr3)
{
    int *ptrs[3];
    int tmp;

    ptrs[0] = ptr1;
    ptrs[1] = ptr2;
    ptrs[2] = ptr3;

    for (int i = 0; i < 3; i++)
    {
        for (int j = i + i; j < 3; j++)
        {
            if (*ptrs[i] > *ptrs[j])
            {
                tmp = *ptrs[i];
                *ptrs[i] = *ptrs[j];
                *ptrs[j] = tmp;
            }
        }
    }
}
