#include <stdio.h>

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
        }
    }

    return 0;
}
