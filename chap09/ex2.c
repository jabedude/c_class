#include <stdio.h>
#include <stdlib.h>

#include "chap9.h"

int main(void)
{
        struct money a = init(5, 10);
        struct money b, c;

        b = input();
        add2(a, b, &c);
        print(c);
        return 0;
}

struct money init(int dollars, int cents)
{
        struct money ret;
        ret.dollars = dollars;
        ret.cents = cents;

        return ret;
}

struct money input(void)
{
        char d_in[4], c_in[4];
        int dollars, cents;
        struct money ret;

        printf("Please enter dollars: ");
        fgets(d_in, sizeof(int), stdin);
        printf("Please enter cents: ");
        fgets(c_in, sizeof(int), stdin);

        dollars = atoi(d_in);
        cents = atoi(c_in);

        ret.dollars = dollars;
        ret.cents = cents;

        return ret;
}
void add2(struct money a, struct money b, struct money *c)
{
        c->dollars = a.dollars + b.dollars;
        c->cents = a.cents + b.cents;
}

 void print(struct money a)
{
         printf("There is %d dollars and %d cents in this money.\n", a.dollars, a.cents);
}
