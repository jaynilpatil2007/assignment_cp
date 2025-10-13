// WAP to perform math functions such as sin(), cos(), log(), etc. by including <math.h> header file.

#include <stdio.h>
#include <math.h>
#define PI 3.14
#define e 2.73

int main()
{

    printf("1. sin() \n");
    printf("2. cos() \n");
    printf("3. tan() \n");
    printf("4. log() \n");

    int choice;
    printf("Chosse you function: ");
    scanf("%d", &choice);

    float n, x;

    if (choice == 1)
    {
        printf("Enter the value of angle: PI/");
        scanf("%f", &n);
        printf("sin(PI / %.2f) = %.2f", n, sin(PI / n));
    }

    else if (choice == 2)
    {
        printf("Enter the value of angle: PI/");
        scanf("%f", &n);
        printf("cos(PI / %.2f) = %.2f", n, cos(PI / n));
    }

    else if (choice == 3)
    {
        printf("Enter the value of angle: PI/");
        scanf("%f", &n);
        printf("sin(PI / %.2f) = %.2f", n, tan(PI / n));
    }

    else if (choice == 4)
    {
        printf("Enter the value of x: ");
        scanf("%f", &x);
        printf("log(%.2f) = %.2f", x, log(x));
    }

    else
    {
        printf("Invalid Input :)");
    }

    return 0;
}