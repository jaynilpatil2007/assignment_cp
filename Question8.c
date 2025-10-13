// WAP to find the HCF of two numbers using the Euclid Algorithm.

#include <stdio.h>

int main()
{
    int a, b, num, dem, rem, HCF;
    printf("Enter the first number: ");
    scanf("%d", &a);
    printf("Enter the second number: ");
    scanf("%d", &b);

    if (a > b)
    {
        num = a;
        dem = b;
    }
    else
    {
        num = b;
        dem = a;
    }

    rem = num % dem;

    while (rem != 0)
    {
        num = dem;
        dem = rem;
        rem = num % dem;
    }
    HCF = dem;
    printf("HCF of %d & %d is %d", a, b, HCF);

    return 0;
}