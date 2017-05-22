#include <stdio.h>

#include "ex3.h"

int
main(void)
{
    struct MyStructure {
        union MyUnion structUnion;
        struct MyBitfield structBits;
        struct MyOrdinaryStruct structOrd;
    };

    return 0;
}
