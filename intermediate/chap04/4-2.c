//
//  Starter file for Exercise 4-2
//

#include <stdio.h>
#include <string.h>

#define SIZE 5

int ispal(unsigned int p);

int main()
{
	int i;
	char line[100];
	unsigned int value;
	
	//
	//	SOME TEST VALUES
	//
	//			               YES    YES  YES   NO    YES
	unsigned int a[SIZE] = { 0177777, 01700, 0,  034, 053152 };
	for (i = 0; i < SIZE; i++) {
		value = a[i];
		if( ispal(value) ) {
			printf("YES\n");
		} else {
			printf("NO\n");
		}
	}
}
int ispal(unsigned int p)
{
//
//	YOU WRITE THIS PART
//
    char org[33];
    char rev[33];

    for (int i = 32; i > -1; i--)
    {
        if (p & 1)
            org[i] = '1';
        else
            org[i] = '0';

        p >>= 1;
    }
    org[33] = '\0';
    printf("%s\n", org);

    int len, ret, i;

    for (len = strlen(org) - 1, i = 0; len >= 0; len--, i++)
        rev[i] = org[len];

    ret = strcmp(rev, org);

    if (!ret)
        return 1;
    else
        return 0;
}
