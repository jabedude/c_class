#include <stdio.h>

int main(void)
{
        int c;

        while ((c = getchar()) != EOF)
                if ((c >= "65" && c <= "90") ||
                    (c >= "97" && c <= "122"))
                        printf("%c", c);
        return 0;
}
