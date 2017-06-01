#include <stdio.h>
#include <string.h>
struct node
{
	char name[10];
	int id;
	struct node *link;
};
struct node init(char *n, int number)
{
	struct node temp;
	strcpy(temp.name, n);
	temp.id = number;
	return temp;
}
void print(struct node *start)
{
	while(start != NULL)
	{
		printf("%s %d\n", start -> name, start -> id);
		start = start -> link;
	}
}
struct node * insert(struct node *start, struct node *new)
{
	new -> link = start;
	start = new;
	return start;
} 
struct node * append(struct node *start, struct node *new)
{
	struct node *prev;
	struct node *this = start;
	while ( start != NULL)
	{
		prev = start;
		start = start -> link;
	}
	prev -> link = new;
	new -> link = NULL;
	return this;
} 
int main()
{
	struct node item1, item2, item3;
	item1 = init("mike", 5);
	item2 = init("susan", 10);
	item3 = init("linda", 15);
	item3.link = NULL;
	item2.link = &item3;
	item1.link = &item2;
	struct node *head = &item1;
	printf("ORIGINAL\n");
	print(head);
	struct node newone;
	newone = init("Jerry", 40);
	head = insert(head, &newone);
	printf("\nAFTER INSERTING Jerry\n");
	print(head);

	struct node another;

	another = init("Mary", 40);

	head = append(head, &another);

	printf("\nAFTER APPENDING Mary\n");
	print(head);
}
