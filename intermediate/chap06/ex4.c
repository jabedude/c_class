#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int
main(int argc, char *argv[])
{
    int sum = 0;

    for (int i = 1; i < argc; i++) {
        for (int j = 0; j < strlen(argv[i]); j++) {
            if (isdigit(argv[i][j])) {
                sum += argv[i][j] - '0';
            }
        }
            
    }

    printf("%d\n", sum);
    return 0;
}
