#include <stdio.h>
#include <string.h>

int
main(void)
{
    char *pc;
    char lines[10][20];

    strcpy(lines[0], "mike");
    pc = lines[0];

    printf("Lines is %li\n", sizeof(lines));
    printf("Lines[1] is %li\n", sizeof(lines[1]));
    printf("Lines[1][3] is %li\n", sizeof(lines[1][3]));
    printf("Lines[0] is %li\n", strlen(lines[0]));
    printf("pc is %li\n", sizeof(pc));

    return 0;
}
