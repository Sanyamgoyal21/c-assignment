#include <stdio.h>

int main()
{
    float area, base, height;
    printf("enter base and height of triangle:");
    scanf("%f %f", &base, &height);
    area = 0.5 * base * height;
    printf("%f", area);
    return 0;
}