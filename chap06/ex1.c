#include <stdio.h>

int alphacheck(char string[]);

int main(void)
{
        char test[] = {'t', 'e', 's', 't', '\0'};
        char test2[] = {'t', 'e', 's', 't', '2', '\0'};

        if (alphacheck(test))
                printf("%s\n", "Test has no non-alphas.");
        if (alphacheck(test2))
                printf("%s\n", "Test2 has no non-alphas.");
        return 0;
}

int alphacheck(char str[])
{
        int i = 0;

        while (str[i] != '\0') {
                if ((str[i] <= 65) ||
                    (str[i] >= 91 && str[i] <= 96))
                        return 0;
                i++;
        }

        return 1;
}
