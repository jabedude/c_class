#include <stdio.h>

void average(int numbers[], int amount, double *avg);

int main(void)
{
        int nums[] = {1, 2, 3, 4};
        double ans;

        average(nums, 4, &ans);

        printf("Avg is: %f\n", ans);
        return 0;
}

void average(int numbers[], int amount, double *avg)
{
        int sum = 0;

        for (int i = 0; i < amount; i++) {
                sum += numbers[i];
        }
        
        *avg = (double) sum/amount;
}
