#include <stdio.h>
#include <stdlib.h>

struct test {
    char name[10];
    int number;
};

int
compare(const void *a, const void *b)
{
    struct test *first = (struct test *) a;
    struct test *second = (struct test *) b;

    return first->number - second->number;
}

int
main(void)
{
    
    struct test bank[] = {
        "mike", 0, "jane", 5,
        "mike", 0, "jane", 5,
        "mike", 0, "jane", 5,
    };

    printf("Before sort:\n");

    for (int i =0; i < sizeof(bank)/sizeof(struct test); i++)
        printf("%s %d\n", bank[i].name, bank[i].number);

    qsort(bank, 6, sizeof(struct test), compare);

    printf("After sort:\n");

    for (int i =0; i < sizeof(bank)/sizeof(struct test); i++)
        printf("%s %d\n", bank[i].name, bank[i].number);

    return 0;
}
