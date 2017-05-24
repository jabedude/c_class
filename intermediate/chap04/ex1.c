#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void
printBinary(unsigned char bits);

int
main(void)
{
    char act[10];
    char num[10];
    int bitnum;
    unsigned char field = 0;

    while (1)
    {
        printf("action-> ");
        fgets(act, 10, stdin);

        if (!strcmp(act, "on\n"))
        {
            printf("bit number-> ");
            bitnum = atoi(fgets(num, 10, stdin));
            field |= 1 << bitnum;
            printBinary(field);

        }
        else if (!strcmp(act, "off\n"))
        {
            printf("bit number-> ");
            bitnum = atoi(fgets(num, 10, stdin));
            field &= ~(1 << bitnum);
            printBinary(field);
        }
        else if (!strcmp(act, "quit\n"))
        {
            return 0;
        }
        else
        {
            fprintf(stderr, "UNKNOWN OPTION %s\n.", act);
        }
    }

    return 0;
}

void
printBinary(unsigned char bits)
{
    char out[17];

    for (int i = 16; i > -1; i--)
    {
        if (bits & 1)
            out[i] = '1';
        else
            out[i] = '0';

        bits >>= 1;
    }
    out[17] = '\0';
    printf("%s\n", out);
}
