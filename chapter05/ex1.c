#include <stdio.h>

int main(void)
{
        char c;

        while ((c = getchar()) != EOF)
                if ((c >= 65 && c <= 91) ||
                    (c >= 97 && c <= 122))
                        printf("%c", c);
        return 0;
}
