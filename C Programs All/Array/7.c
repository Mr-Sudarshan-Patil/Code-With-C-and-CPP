
#include <stdio.h>
#define A 100  

int main()
{
    int arr[A];
    int size, i, n, flag;
    printf("Enter size of array: ");
    scanf("%d", &size);
    printf("Enter elements in array: ");
    for(i=0; i<size; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("\nEnter element to search: ");
    scanf("%d", &n);
    flag = 0; 
    for(i=0; i<size; i++)
    {
        if(arr[i] == n)
        {
            flag = 1;
            break;
        }
    }

    if(flag == 1)
    {
        printf("\n%d is found at position %d",n, i + 1);
    }
    else
    {
        printf("\n%d is not found in the array",n);
    }

    return 0;
}