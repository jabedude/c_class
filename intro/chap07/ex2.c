#include <stdio.h>
#include <string.h>

void changecase(char string[]);

int main(void)
{
        char line[100];
        printf("Enter a string to change case: \n");
        fgets(line, 100, stdin);

        changecase(line);
        printf("%s\n", line);
        return 0;
}

void changecase(char string[])
{
        for (int i = 0; i < strlen(string); i++) {
                if (string[i] >= 65 && string[i] <= 90) {
                        string[i] += 32;
                } else if (string[i] >= 97 && string[i] <= 122) {
                        string[i] -= 32;
                }
        }
}
