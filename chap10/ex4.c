#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int counter(FILE* file, char* fname);

int main(int argc, char* argv[])
{

    if (argc != 2)
    {
        printf("Please supply one argument\n");
        return 1;
    }
    
    FILE* f;
    f = fopen(argv[1], "r");
    
    counter(f, argv[1]);

    fclose(f);
    
    return 0;
}

int counter(FILE* file, char* fname)
{
    int count = 0;
    int word_count = 0;
    int char_count = 0;
    int lastCharAlphaNum = 1;
    char ch;

    while((ch = fgetc(file)) != EOF)
    {
        if(ch == '\n')
	{
	    count++;
        word_count++;
	}
        else if(ch == ' ' && lastCharAlphaNum)
            word_count++;

        if( isalpha(ch) || isdigit(ch) )
            lastCharAlphaNum = 1;
        else
            lastCharAlphaNum = 0;

        char_count++;
    }

    printf("%d\t%d\t%d\t%s\n", count, word_count, char_count, fname);
    return count;
}
