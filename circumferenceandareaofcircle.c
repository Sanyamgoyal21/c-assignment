#include <stdio.h>

int main()
{
    float radius, area, circumference;
    printf("enter radius of the circle :");
    scanf("%f", &radius);
    area = 3.14 * radius * radius;
    circumference = 2 * 3.14 * radius;
    printf("%f\n", area);
    printf("%f\n", circumference);
    return 0;
}