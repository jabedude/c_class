#include <stdio.h>
#include <stdlib.h>

void
convert(int cel);

int
main(int argc, char **argv)
{
    if (argc != 4) {
        printf("%s: usage <start> <end> <step>\n", argv[0]);
        return -1;
    }
    
    printf("CELSIUS\tFAHRENHEIT\n");

    for (int i = atoi(argv[1]); i <= atoi(argv[2]); i += atoi(argv[3]))
        convert(i);

    return 0;
}

void
convert(int cel)
{
    double f;
    f = (double) 1.8 * cel + 32;

    printf("%d\t%.2f\n", cel, f);
}
