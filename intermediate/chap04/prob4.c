#include <stdio.h>
#include <stdlib.h>

void
eval(int num);

int
main(int argc, char *argv[])
{
    if (argc == 1)
    {
        fprintf(stderr, "%s: please supply at least one integer.\n", argv[0]);
    }

    for (int i = 1; i < argc; i++)
    {
        eval(atoi(argv[i]));
    }
    return 0;
}

void
eval(int num)
{
    unsigned int x = (unsigned int) num;
    unsigned int tmp = x;
    char bits[33];
    int count = 0;

    while (x)
    {
        count++;
        x >>= 1;
    }

    printf("%d\t%d\t", num, count);
    
    for (int i = 32; i > 0; i--)
    {
        if (tmp & 1)
        {
            bits[i] = '1';
        }
        else
        {
            bits[i] = '0';
        }
        tmp >>= 1;
    }
    bits[33] = '\0';
    printf("%s\n", bits);

}
