#include <stdio.h>

int main()
{
    int n, rem, reverse;
    printf("enter n");
    scanf("%d", &n);
    for (reverse = 0; rem = n % 10; n = n / 10)
    {
        reverse = reverse * 10 + rem;
    }
    printf("%d", reverse);
    return 0;
}