#include <stdio.h>

int main(void)
{
        char c;

        while ((c = getchar()) != EOF) {
                putchar(c);
                if (c == '\n')
                        putchar('\n');
        }

        return 0;
}
