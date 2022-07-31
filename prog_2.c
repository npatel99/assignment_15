/****Write a function to find the smallest number from the given array of any size. (TSRS)****/

#include <stdio.h>

int smallestNumber(int arr[], int n)
{
    int i, smallest = arr[0];
    for(i = 1; i<n; i++)
    {
        if(smallest>arr[i])
            smallest = arr[i];
    }
    return smallest;
}

int main() {
    int a[] = {11, 22, 33, 44, 10, 77, 4, 2};
    int n = sizeof(a)/sizeof(a[0]);
    printf("smallest number in the array is: %d", smallestNumber(a, n));
    
    return 0;
}
