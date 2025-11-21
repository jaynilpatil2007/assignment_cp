// Write a C program to Check whether a number is a palindrome using function:

// #include<stdio.h>

// int palindrome(int n);  //PROTOTYPE

// int main() {
//     int n, res;
//     printf("Enter the number: ");
//     scanf("%d", &n);

//     res = palindrome(n);    //FUNCTION CALL

//     res == n ? printf("%d is Palindrome number", n) : printf("%d is not a Palindrome number");

//     return 0;
// }

// int palindrome(int n) {     //FUNCTION DIFINE
//     int b, m, x=0;
//     b = n;
//     while(b != 0) {
//         m = b % 10;
//         x = x * 10 + m;
//         b/=10;
//     }
//     return x;
// }

// Second method

#include <stdio.h>

void palindrome(int n);

int main()
{
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);

    palindrome(n);

    return 0;
}

void palindrome(int n)
{
    int rev = 0;

    if (n < 0)
    {
        printf("Negative numbers can never be palindrome");
        return;
    }

    if (n % 10 == 0 && n != 0)
    {
        printf("Not a palindrome number");
        return;
    }

    while (n > rev)
    {
        rev = rev * 10 + (n % 10);
        n /= 10;
    }

    if (n == rev || n == rev / 10)
        printf("The number is palindrome");
    else
        printf("Not a palindrome number");
}
