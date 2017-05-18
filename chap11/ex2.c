#include <stdio.h>
#include <time.h>
#include <unistd.h>

int 
main(void)
{
    struct tm *t;
    time_t tm;

    time(&tm);

    t = localtime(&tm);

    printf("The date is %d/%d/%d\n", t->tm_mday,
                                     t->tm_mon + 1,
                                     t->tm_year + 1900);

    sleep(10);

    printf("The date is %d/%d/%d\n", t->tm_mday,
                                     t->tm_mon + 1,
                                     t->tm_year + 1900);

    return 0;
}
