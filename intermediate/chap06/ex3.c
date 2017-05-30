#include <stdio.h>
#include <string.h>

int
lookup(char **argv, int count, const char *str);

int
main(int argc, char *argv[])
{
    char line[100];

    gets(line);
    (void) lookup(argv, argc, line);
    return 0;
}

int
lookup(char **argv, int count, const char *str)
{
    for (int i = 1; i < count; i++) {
        if (!strcmp(argv[i], str))
            printf("%s was argument %d\n", str, i);
    }

    return 0;
}
