#ifndef CHAP9
#define CHAP9

/* Structs */

struct money {
        int dollars;
        int cents;
};

/* Function prototypes */
struct money init(int dollars, int cents);
struct money add(struct money a, struct money b);
struct money input(void);
void print(struct money mon);

#endif
