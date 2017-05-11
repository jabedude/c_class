#include <stdio.h>
#include <string.h>

int palindrome(char string[]);

int main(void)
{
        char line[100];
        printf("Enter a string to reverse: \n");
        fgets(line, 100, stdin);

        if (palindrome(line))
                printf("Palin!\n");
        else
                printf("Not palin\n");
        return 0;
}

int palindrome(char string[])
{
        char rev[100];
        int len, ret, i;

        string[strlen(string) - 1] = '\0';

        for (len = strlen(string) - 1, i = 0 ; len >= 0; len--, i++)
                rev[i] = string[len];

        ret = strcmp(rev, string);

        if (!ret)
                return 1;
        else
                return 0;
}
