#include <stdio.h>

int main(void)
{
        return 0;
}

void sort(struct employee [] array, int sz)
{
        struct employee tmp;

        for (int i = 0; i < sz; i++) {
                for (int j = i + 1; j < sz; j++) {
                        if (array[i].pay > array[j].pay) {
                                tmp = array[i];
                                array[i] = array[j]
                                array[j] = tmp;
                        }
                }
        }
}
