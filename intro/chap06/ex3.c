#include <stdio.h>

#define MAX 100

void split(char input[], char out[], char out2[]);

int main(void)
{
        char field1[MAX], field2[MAX];
        char str[MAX]; //= {'h', 'e', 'l', 'l', 'o', ' ', ' ', 'k', 'e', 'k', '\0'};

        fgets(str, MAX, stdin);
        split(str, field1, field2);

        printf("String 1: %s\nString 2: %s\n", field1, field2);
        return 0;
}

void split(char input[], char out[], char out2[])
{
        int i = 0, j = 0;

        while ((input[i] != ' ') && (input[i] != '\t')) {
                out[i] = input[i];
                i++;
        }
        out[i] = '\0';

        while ((input[i] == ' ') || (input[i] == '\t'))
                i++;

        while(input[i] != '\0') {
                out2[j] = input[i];
                i++;
                j++;
        }
        out2[j] = '\0';
}
