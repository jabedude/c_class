#include <stdio.h>

int main(void)
{
        char c;
        char line[100];
        int i = 0;

        while ((c = getchar()) != EOF) {
                line[i] = c;
                i++;

                if (c == '\n') {
                        if (i < 20) {
                                for (int j = 0; j < i; j++) {
                                        putchar(line[j]);
                                }
                        }
                        i = 0;
                }
        }

        return 0;
}
