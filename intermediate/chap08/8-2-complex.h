#ifndef EX2_H
#define EX2_H

typedef struct COMPLEX {
    int a;
    int b;
} COMPLEX;

COMPLEX init(int one, int two);
COMPLEX add(COMPLEX *one, COMPLEX *two);
void print(COMPLEX *cmp);

#endif
