#include <stdio.h>
#include <string.h>


typedef struct WordCount {
    char *word;
    int count;
} WordCount;

int
isMember(WordCount *data, char *test);

void
append(WordCount *data, char *word);

int
main(int argc, char *argv[])
{
    FILE *fp;
    int ind;
    char word[100];
    WordCount data[10];

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

    while (fscanf(fp, "%s", word) != EOF)
    {
        puts(word);
        if ((ind = isMember(data, word)))
        {
            data[ind].count++;
        }
        else
        {
            append(data, word);
        }
    }

    fclose(fp);

    return 0;
}

void
append(WordCount *data, char *word)
{
    for (int i = 0; i < 10; i++)
    {
        if (!data[i].count)
        {
            strcpy(data[i].word, word);
            return;
        }
    }
}

int
isMember(WordCount *data, char *test)
{
    for (int i = 0; i < 10; i++)
    {
        if (!strcmp(data[i].word, test))
        {
            return i;
        }
    }

    return 0;
}
