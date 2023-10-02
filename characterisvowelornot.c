#include <stdio.h>

int main()
{
    char x;
    printf("enter character :");
    scanf("%c", &x);
    if (x == 'a' || x == 'e' || x == 'i' || x == 'o' || x == 'u')
    {
        printf(" Enter Character is a vowel");
    }
    else
    {
        printf("Enter Character is not vowel");
    }
    return 0;
}