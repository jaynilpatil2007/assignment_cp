// Keep reading in integers until one integer larger than 100 is not input. For example: 4 -90, 35, 78, 110 QUIT!  (since 110 is bigger than 100).

// Method 1:
//  #include <stdio.h>
//  int main()
//  {
//      int i;
//      for (i = 1; i > 0; i++)
//      {
//          int n;
//          printf("Enter the number: ");
//          scanf("%d", &n);
//          printf("%d \n", n);

//         if (n > 100)
//             break;
//     }
//     printf("You put the number greater than 100 \n");

//     return 0;
// }

// Method 2:
#include <stdio.h>

int main()
{
    int i, j, arr[100];
    for (i = 1; i < 100; i++)
    {
        printf("Enter the number: ");
        scanf("%d", &arr[i]);

        if (arr[i] > 100)
        {
            printf("Numbers entered before 100 is/are: \n");
            for (j = 1; j < i; j++)
            {
                printf("%d ", arr[j]);
            }
            break;
        }
    }

    printf("\nThe last value you entered is grater than 100 \n");

    return 0;
}