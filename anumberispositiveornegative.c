#include <stdio.h>

int main()
{
    int x;
    printf("enter value of x :");
    scanf("%d", &x);
    if (x > 0)
    {
        printf("number is positive");
    }
    else
    {
        printf("number is negative");
    }
    return 0;
}