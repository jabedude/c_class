#include <stdio.h>
#include <string.h>

void glue(FILE *file1, FILE *file2);

int main(int argc, char *argv[])
{
    if (argc != 3)
    {
        fprintf(stderr, "Usage: %s file1 file2\n", argv[0]);
        return -1;
    }
    else
    {
        FILE *f1 = fopen(argv[1], "r");
        FILE *f2 = fopen(argv[2], "r");
        if (!f1 || !f2)
        {
            fprintf(stderr, "Error opening file.\n");
            return -1;
        }
        else
        {
            glue(f1, f2);
            fclose(f1);
            fclose(f2);
        }
    }

    return 0;
}

void glue(FILE *file1, FILE *file2)
{
    char c[100], d[100];

    while((fgets(c, 100, file1)) != NULL)
    {
        puts(c);
    }
    while((fgets(d, 100, file2)) != NULL)
    {
        puts(d);
    }
}
