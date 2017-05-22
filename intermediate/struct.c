#include <stdio.h>
struct test
{
	char name[10];
	int number;
};
int main()
{
	struct test bank[] = 
			{ "mike", 0, "jane", 5,
			 "mike", 0, "jane", 5,
			 "mike", 0, "jane", 5,
			};
	for (int i =0; i < sizeof(bank)/sizeof(struct test); i++)
		printf("%s %d\n", bank[i].name, bank[i].number);
//
//	print the structures in sorted order
//	a) by name
//	b) by number
//
}
