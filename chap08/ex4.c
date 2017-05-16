#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *getuppers(char *str);

int main(void)
{
        char test[] = "United States of America";
        char *uppers = getuppers(test);

        printf("%s\n", uppers);

        free(uppers);
        return 0;
}

char *getuppers(char *str)
{
        char *up = (char *) malloc(10);
        char *tok;


        int i = 0;
        tok = strtok(str, " ");
        do {
                if (!strcmp(tok, "and") || !strcmp(tok, "for") || !strcmp(tok, "of")) {
                        tok = strtok(NULL, " ");
                        continue;
                } else {
                        printf("%s\n", tok);
                        if (tok[0] >= 65 && tok[0] <= 90) {
                                up[i] = tok[0];
                                i++;
                        }
                }

                tok = strtok(NULL, " ");
        } while (tok != NULL);

        return up;
}
