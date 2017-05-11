#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *getuppers(char *str);

int main(void)
{
        char *test = (char *) "United States of America";
        char *uppers = getuppers(test);

        printf("%s\n", uppers);

        free(uppers);
        return 0;
}

char *getuppers(char *str)
{
        char *up = (char *) malloc(10);

        for (int i = 0, j = 0; i < (int) strlen(str); i++) {
                if (str[i] >= 65 && str[i] <= 90) {
                        up[j] = str[i];
                        j++;
                }
        }

        return up;
}
