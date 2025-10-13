//Write a C program to Check whether a number is a palindrome using function:

#include<stdio.h>

int palindrome(int n);  //PROTOTYPE

int main() {
    int n, res;
    printf("Enter the number: ");
    scanf("%d", &n);

    res = palindrome(n);    //FUNCTION CALL
 
    res == n ? printf("%d is Palindrome number", n) : printf("%d is not a Palindrome number");

    return 0;
}

int palindrome(int n) {     //FUNCTION DIFINE
    int b, m, x=0;
    b = n;
    while(b != 0) {
        m = b % 10;
        x = x * 10 + m;
        b/=10;
    }
    return x;
}