#include <stdio.h>

int main()
{
    float a, b, c, d, e;
    printf("enter marks in subject 1 :");
    scanf("%f", &a);

    printf("enter marks in subject 2 :");
    scanf("%f", &b);

    printf("enter marks in subject 3 :");
    scanf("%f", &c);

    printf("enter marks in subject 4 :");
    scanf("%f", &d);

    printf("enter marks in subject 5 :");
    scanf("%f", &e);

    float percentage = ((a + b + c + d + e) / 500) * 100;
    printf("percentage is : %f", percentage);
    return 0;
}