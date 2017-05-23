#include <stdlib.h>
int arr[1000];

void
put(int val, int position)
{
    if (position > 999)
    {
        return;
    }
    else
    {
        arr[position] = val;
    }
}

int
get(int position)
{
    if (position > 999)
    {
        return -1;
    }
    else
    {
        return arr[position];
    }
}
