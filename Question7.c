/*WAP to take two numbers and operations (‘+’ or ‘–‘or ‘*’). If the operation is (‘+’ or ‘–‘ or ‘*’), print their corresponding results, else print the message invalid operation. Perform this using ternary operator. */
#include<stdio.h>

int main() {
    int a, b;
    printf("Enter the value of a: ");
    scanf("%d", &a);
    printf("Enter the value of b: ");
    scanf("%d", &b);

    char sym;
    printf("Choose one the symbol given(+, -, *): ");
    scanf(" %c", &sym);

    sym == '+' ? printf("%d + %d = %d", a, b, a+b) : sym == '-' ? a > b ? printf("%d - %d = %d", a, b, a-b) : printf("%d - %d = %d", b, a, b-a) : sym == '*' ? printf("%d * %d = %d", a, b, a*b) : printf("Invalid input");

    return 0;
}