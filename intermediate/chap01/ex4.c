#include <stdio.h>

int
main(int argc, char *argv[])
{
    struct MyStructure {
        union MyUnion structUnion;
        struct MyBitfield structBits;
        struct MyOrdinaryStruct structOrd;
    };

    return 0;
}
