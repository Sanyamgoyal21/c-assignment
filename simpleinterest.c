#include <stdio.h>
// p-principal,r-rateofinterest,t-timeinyears
int main()
{
    int p, r, t;
    float simple_interest;
    printf("enter principal and rate of interest and time in years");
    scanf("%d %d %d", &p, &r, &t);
    simple_interest = ((p * r * t) / 100);
    printf("simple interest is : %f", simple_interest);
    return 0;
}