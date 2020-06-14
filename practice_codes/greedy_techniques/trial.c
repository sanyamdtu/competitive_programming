#include <stdio.h>
int main()
{
    float a, b, sum, avg;
    printf("Enter Two Numbers To Find Sum and Average\n");
    scanf("%f %f", &a, &b);
    sum = a + b;
    avg = sum / 2;
    printf("Sum Of The Two Numbers = %.1f \n", sum);
    printf("Average Of The Two Numbers = %.1f \n", avg);
    return 0;
}
