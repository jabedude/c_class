#include <stdio.h>
#include <string.h>

void glue(FILE *file);

int main(int argc, char *argv[])
{
    if (argc < 2)
    {
        fprintf(stderr, "Usage: %s <files to glue>\n", argv[0]);
        return -1;
    }
    else
    {
        for (int i = 1; i < argc; i++)
        {
            FILE *f = fopen(argv[i], "r");
            if (!f)
            {
                fprintf(stderr, "Error opening file.\n");
                return -1;
            }
            else
            {
                glue(f);
                fclose(f);
            }
        }
    }

    return 0;
}

void glue(FILE *file)
{
    char c;

    while((c = getc(file)) != EOF)
    {
        putchar(c);
    }
}
