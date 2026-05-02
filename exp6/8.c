/*Write a program to count the number of even and odd elements in an array
using pointers.*/

#include <stdio.h>

int main()
{
    int arr[10], i, n, even = 0, odd = 0;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    printf("Enter the elements of the array: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < n; i++)
    {
        if (arr[i] % 2 == 0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    }
    printf("The number of even elements in the array is: %d", even);
    printf("\nThe number of odd elements in the array is: %d", odd);
    return 0;
}