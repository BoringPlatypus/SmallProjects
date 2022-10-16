#include <stdio.h>

int main(void)
{
    float x;
    float y;
    char a[1];

    printf("x: ");
    scanf("%f", &x);

    printf("+, -, *, /: ");
    scanf("%s", &a);

    printf("y: ");
    scanf("%f", &y);

    if (*a == '+')
    {
        printf("The result is: %.2f", x + y);
    }
    else if (*a == '-')
    {
        printf("The result is: %.2f", x - y);
    }
    else if (*a == '*')
    {
        printf("The result is: %.2f", x * y);
    }
    else if (*a == '/')
    {
        printf("The result is: %.2f", x / y);
    }
}