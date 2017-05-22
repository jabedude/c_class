#include <stdio.h>

void eligible(int age, int years);

int main(void)
{
        eligible(57, 14);
        eligible(69, 69);
        return 0;
}

void eligible(int age, int years)
{
        if (age == years)
                printf("Eligible for Presidency\n");
        else
                printf("Not eligible for Presidency\n");

        if (age > 25 && years > 7) {
                if (age > 30 && years > 9)
                        printf("Eligible for Senate\n");
                else
                        printf("Not eligible for Senate\n");
                printf("Eligible for House\n");
        } else
                printf("Not eligible for House\n");
}
