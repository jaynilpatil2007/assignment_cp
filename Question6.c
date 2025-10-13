// WAP using sizeof() function to find the size of char, integer, long int, float and double.

#include <stdio.h>

int main()
{
    printf("size of int: %d bytes\n", sizeof(int));
    printf("size of float: %d bytes\n", sizeof(float));
    printf("size of char: %d bytes\n", sizeof(char));
    printf("size of double: %d bytes\n", sizeof(double));
    printf("size of long int: %d bytes\n", sizeof(long int));

    return 0;
}