#include <stdio.h>

#include "chap9.h"

int main(void)
{
        struct employee employees[4];
        employees[0].pay = 12;
        employees[1].pay = 1;
        employees[2].pay = 4;
        employees[3].pay = 5;

        for (int i = 0; i < 4; i++)
                printf("%f\n", employees[i].pay);

        sort(employees, 4);

        for (int i = 0; i < 4; i++)
                printf("%f\n", employees[i].pay);

        return 0;
}

void sort(struct employee array[], int sz)
{
        struct employee tmp;

        for (int i = 0; i < sz; i++) {
                for (int j = i + 1; j < sz; j++) {
                        if (array[i].pay > array[j].pay) {
                                tmp = array[i];
                                array[i] = array[j];
                                array[j] = tmp;
                        }
                }
        }
}
