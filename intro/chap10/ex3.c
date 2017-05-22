#include <stdio.h>
#include <string.h>

void glue(FILE *file, char *out);

int main(int argc, char *argv[])
{
    if (argc < 2)
    {
        fprintf(stderr, "Usage: %s <files to glue>\n", argv[0]);
        return -1;
    }
    else
    {
        char *out_file = NULL;
        if (argv[argc - 1][0] == '+')
        {
            out_file = &argv[argc - 1][1];
            argc--;
        }

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
                glue(f, out_file);
                fclose(f);
            }
        }
    }

    return 0;
}

void glue(FILE *file, char *out)
{
    char c;
    if (out)
    {
        FILE *out_file = fopen(out, "a+");
        while((c = getc(file)) != EOF)
        {
            fputc(c, out_file);
        }
    }

    while((c = getc(file)) != EOF)
    {
        putchar(c);
    }
}
