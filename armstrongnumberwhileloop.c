#include <stdio.h>

int main()
{
    int rem, num, temp, sum = 0;
    printf("enter num");
    scanf("%d", &num);
    temp = num;
    while (num > 0)
    {
        rem = num % 10;
        rem = rem * rem * rem;
        sum = sum + rem;
        num = num / 10;
    }
    if (temp == sum)
        printf(" number is angstrome");
    else
        printf(" number is not angstrome");
    return 0;
}