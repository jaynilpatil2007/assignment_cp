// WAP to take numbers and characters and print their ASCII values.

#include <stdio.h>

int main()
{
    char ch;
    printf("Enter the character: ");
    scanf("%c", &ch);

    printf("ASCII value of %c is %d", ch, ch);

    return 0;
}