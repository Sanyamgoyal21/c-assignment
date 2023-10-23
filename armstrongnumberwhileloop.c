#include <stdio.h>
#include <math.h>
int main()
{
    int n, sum = 0, c = 0;
    printf("enter num");
    scanf("%d", &n);
    int b = n;
    int a = n;
    while (n > 0)
    {
        int y = n % 10;
        c++;
        n = n / 10;
    }
    while (b > 0)
    {
        int y = b % 10;
        sum = sum + pow(y, c);
        b = b / 10;
    }
    if (a == sum)
    {
        printf("it is angstrome number");
    }
    else
    {
        printf("it is not angstrome number");
    }
    return 0;
}
