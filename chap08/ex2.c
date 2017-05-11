#include <stdio.h>

void stats(int *nums, int sz, double *mean, double *var);

int main(void)
{
        int num[] = {1, 2, 3, 4, 5};
        double avg;
        double variance;

        stats(num, 5, &avg, &variance);

        printf("Average is: %f\nVariance is: %f\n", avg, variance);
        return 0;
}

void stats(int *nums, int sz, double *mean, double *var)
{
        int sum = 0;
        int sq = 0;

        for (int i = 0; i < sz; i++) {
                sum += nums[i];
                sq += nums[i] * nums[i];
        }

        *mean = (double) sum/sz;
        *var = (double) ((sq/sz) - (*mean * *mean));
}
