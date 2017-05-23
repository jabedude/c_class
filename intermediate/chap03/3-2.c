//
//  Starter File for Exercise 3-2
//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define NUM_PEOPLE 4
#define COLS 4

#define WIN   1
#define PLACE 2
#define SHOW  3

#define HIGH   NUM_PEOPLE
#define CLEAR  NUM_PEOPLE + 1
#define PRINT  NUM_PEOPLE + 2
#define POINTS NUM_PEOPLE + 3
#define ALL    NUM_PEOPLE + 4

void record(int person, int action);   // You write this function

void print(int tab[][COLS], int howmany);
void printpoints(int tab[][COLS], int howmany);

int main()
{
	int action, player;
	char reply[80];

	system("cls") && system("clear");

	while(1) {
		printf("\n\n\n\tSELECT ONE OF THE FOLLOWING\n\n");
		printf("\t1) WIN\n\t2) PLACE\n\t3) SHOW\n");
		printf("\t4) CLEAR\n\t5) PRINT\n\t6) POINTS\n\t7)"); 		
		printf(" EXIT\n\t=> ");
		action = atoi(fgets(reply, 80, stdin));

		if (action == WIN || action == PLACE || action == SHOW) {
			printf("\tEnter player number => ");
			player = atoi(fgets(reply, 80, stdin));
			record(player, action);
		}
		else if (action == 4) { 
			record(ALL,CLEAR);
		} 
        else if (action == 5) { 
			record(ALL,PRINT);
        }
		else if (action == 6) {
			record(ALL,POINTS);
        }
		else if (action == 7) { 
			break;
        }
		else {
			printf("IMPROPER CHOICE\n");
        }

		printf("Press return to continue ");
		fgets(reply, 80, stdin); 	
		system("cls") && system("clear");
	}
}

void record(int person, int action)
{
    //  You write this function
    static int rec[ALL][COLS];

    if (person > ALL || action > ALL)
    {
        return;
    }
    else if (action == WIN || action == PLACE || action == SHOW)
    {
        rec[person][action - 1] += 1;
    }
    else if (action == CLEAR)
    {
        memset(rec, 0, sizeof(rec));
    }
    else if (action == PRINT)
    {
        print(rec, person);
    }
    else if (action == POINTS)
    {
        printpoints(rec, person);
    }
}


void print(int tab[][COLS], int howmany)
{
	int i;
    
	printf("person\twin\tplace\tshow\ttotal\n");
	for (i = 1; i <= howmany; i++) {
		printf ("%d\t%d\t%d\t%d\t%d\n",
			i, tab[i][0], tab[i][1],tab[i][2],tab[i][3]);
    }
}

void printpoints(int tab[][COLS], int howmany)
{
	int i;
    
	printf("        person    total\n");
	for (i = 1; i <= howmany; i++) {
		printf ("%10d%10d\n", i, tab[i][3]);
    }
}
