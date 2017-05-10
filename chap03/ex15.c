#include <stdio.h>

void bmi(int lbs, int in);

int main(void)
{
        bmi(146, 70);
        return 0;
}

void bmi(int lbs, int in)
{
        double kg = lbs / 2.20462;
        double meter = in * 0.0254;

        double index = kg / (meter * meter);
        
        if (index < 18.5)
                printf("BMI is %f\nUnderweight\n", index);
        else if (index < 24.9)
                printf("BMI is %f\nNormal\n", index);
        else if (index < 29.9)
                printf("BMI is %f\nOverweight\n", index);
        else
                printf("BMI is %f\nObese\n", index);
}
