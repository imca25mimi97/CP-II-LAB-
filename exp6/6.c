/*Write a program to find the frequency of a given element in an array using
pointers.*/

#include <stdio.h>
int main()
{
    int arr[10], i, n, count = 0;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    printf("Enter the elements of the array: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter the element to find its frequency: ");
    scanf("%d", &i);
    for (int j = 0; j < n; j++)
    {
        if (arr[j] == i)
        {
            count++;
        }
    }
    printf("The frequency of %d is %d", i, count);
    return 0;
}