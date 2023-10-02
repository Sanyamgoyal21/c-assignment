#include <stdio.h>

int main()
{
    float celcius, fahrenhite;
    printf("enter celcius value :");
    scanf("%f", &celcius);
    fahrenhite = (1.8 * celcius) + 32;
    printf("fahrenhite is : %f", fahrenhite);
    return 0;
}