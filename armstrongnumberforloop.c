#include <stdio.h>

int main()
{
    int rem, num, temp, sum = 0;
    printf("enter num");
    scanf("%d", &num);
    temp = num;
    for (sum = 0; num > 0; num = num / 10)
    {
        rem = num % 10;
        sum = sum + rem * rem * rem;
    }
    if (temp == sum)
        printf(" number is angstrome");
    else
        printf(" number is not angstrome");
    return 0;
}
