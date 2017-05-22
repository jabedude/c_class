#include <stdio.h>

int
main(void)
{
    printf("An int is %li\nA char is %li\nAn unsigned int is %li\nA long is %li\nA double is %li\n",
           sizeof(int), sizeof(char), sizeof(unsigned int), sizeof(long), sizeof(double));
    return 0;
}
