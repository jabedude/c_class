#include <stdio.h>

void deny(void);
int check(char arg[]);

int main(int argc, char *argv[])
{
        if (argc != 2 || !check(argv[1])) {
                deny();
                return 1;
        } else {
                printf("%s\n", "access granted");
                return 0;
        }

        return 0;
}

void deny(void)
{
        printf("%s\n", "access denied");
}

int check(char arg[])
{
        char pass[] = {'s', 'w', 'o', 'r', 'd', 'f', 'i', 's', 'h', '\0'};

        int i = 0;

        while (pass[i++]) {
                if (arg[i] != pass[i])
                        return 0;
        }

        return 1;
}
