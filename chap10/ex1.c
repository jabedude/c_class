#include <stdio.h>

int compare(FILE *file1, FILE *file2);

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
            if(compare(f1, f2))
            {
                fprintf(stdout, "%s and %s are the same.\n", argv[1], argv[2]);
            }
            else
            {
                fprintf(stdout, "%s and %s are different.\n", argv[1], argv[2]);
            }
        }
    }

    return 0;
}

int compare(FILE *file1, FILE *file2)
{
    return 0;
}
