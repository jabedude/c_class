#include <stdio.h>
#include <sys/stat.h>
#include <time.h>

void
hours(char *f);

int 
main(int argc, char *argv[])
{
    for (int i = 1; i < argc; i++)
    {
        hours(argv[i]);
    }
    return 0;
}

void
hours(char *f)
{
    struct stat st;
    long int tm;

    time(&tm);

    if (stat(f, &st))
    {
        return;
    }

    long int diff = difftime(tm, st.st_mtime);

    printf("Current time is: %ld\n", tm);
    printf("Mod time is: %ld\n", st.st_mtime);
    printf("Seconds since mod: %li\n", diff);
}
