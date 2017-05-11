#include <stdio.h>
#include <string.h>

int mystrcmp(char *string1, char *string2);

int main(void)
{
        char *test1 = (char *) "HELLO";
        char *test2 = (char *) "HELLO";

        if (mystrcmp(test1, test2))
                printf("TRUE\n");
        else
                printf("FALSE\n");

        return 0;
}

int mystrcmp(char *string1, char *string2)
{
        if (strlen(string1) != strlen(string2))
                return 0;
        
        for (int i = 0; i < (int) strlen(string1); i++) {
                if (string1[i] != string2[i])
                        return 0;
        }

        return 1;
}
