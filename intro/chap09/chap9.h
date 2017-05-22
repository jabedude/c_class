#ifndef CHAP9
#define CHAP9

/* Structs */

struct money {
        int dollars;
        int cents;
};

struct employee {
        char name[20];
        double pay;
        char dept;
};

/* Function prototypes */
struct money init(int dollars, int cents);
struct money add(struct money a, struct money b);
void add2(struct money a, struct money b, struct money *c);
struct money input(void);
void print(struct money mon);
void sort(struct employee array[], int sz);

#endif
