#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <dirent.h>


int
main (int argc, char **argv)
{
    DIR *dp;
    struct dirent *ep;
    struct stat st;

    if (argc != 2)
    {
        fprintf(stderr, "Usage: %s <dir to list>\n", argv[0]);
        return 1;
    }
  
    dp = opendir(argv[1]);
    if (dp != NULL)
    {
        while (ep = readdir(dp))
        {
            stat(ep->d_name, &st);
            printf("%o\t%ld\t", st.st_mode, st.st_mtim);
            printf("%s\n", ep->d_name);
        }
        (void) closedir(dp);
    }
    else
        perror("Couldn't open the directory");
  
    return 0;
}

