#include <stdio.h>
#include <math.h>
int main()
{
    int n, sum = 0, c = 0;
    printf("enter num");
    scanf("%d", &n);
    int b = n;
    for (b = n; n != 0; c++)
    {
        n = n / 10;
    }
    for (b = n; b != 0; n = n / 10)
    {
        int y = b % 10;
        sum = sum + pow(y, c);
    }
    if (b == sum)
    {
        printf("it is angstrome number");
    }
    else
    {
        printf("it is not angstrome number");
    }
    return 0;
}
