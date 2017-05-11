#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void reverse(char *string);

int main(void)
{
        char *line = (char *) malloc(100);
        printf("Enter a string to reverse: \n");
        fgets(line, 100, stdin);

        reverse(line);
        printf("%s\n", line);

        free(line);
        return 0;
}

void reverse(char *string)
{
        char rev[100];
        int len , i;

        for (len = strlen(string) - 1, i = 0 ; len >= 0; len--, i++)
                rev[i] = string[len];

        string = strcpy(string, rev);
}
