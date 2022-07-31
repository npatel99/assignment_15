/****Write a function to find the greatest number from the given array of any size. (TSRS)****/

#include <stdio.h>

int greatestNumber(int arr[], int n)
{
    int i, great = arr[0];
    for(i = 1; i<n; i++)
    {
        if(great<arr[i])
            great = arr[i];
    }
    return great;
}

int main() {
    int a[] = {11, 2, 33, 44, 10, 77, 4, 2};
    int n = sizeof(a)/sizeof(a[0]);
    printf("greatest number in the array is: %d", greatestNumber(a, n));
    
    return 0;
}
