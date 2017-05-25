#include <stdio.h>
#include <string.h>

int
in(char *test, char list[10][10]);

int
main(int argc, char *argv[])
{
    FILE *fp;
    int ind;
    char word[10];
    char words[10][10] = {0};
    int counts[10] = {0};

    if (argc != 2)
    {
        fprintf(stderr, "Usage: %s <input file>\n", argv[0]);
        return 1;
    }

    fp = fopen(argv[1], "r");
    if (!fp)
    {
        fprintf(stderr, "Error opening file.\n");
        return 1;
    }

    ind = 0;
    int pos = 0;
    while (fscanf(fp, "%s", word) != EOF)
    {
        //puts(word);
        if (!(pos = in(word, words)))
        {
            strcpy(words[ind], word);
            counts[ind] = 1;
            ind++;
        }
        else
        {
            counts[ind]++;
        }
    }

    for (int i = 0; i < 10; i++)
    {
        printf("%s\n", words[i]);
        printf("%d\n", counts[i]);
    }

    fclose(fp);
    return 0;
}

int
in(char *test, char list[10][10])
{
    for (int i = 0; i < 10; i++)
    {
        if(!strcmp(list[i], test))
        {
            return i;
        }
    }
    return 0;
}
