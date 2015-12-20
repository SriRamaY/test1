#include <iostream>
#define INT_SIZE 32

int getSingle1(int array[], int n)
{
    int i, sum, x, result;
    for(i=0; i<INT_SIZE; ++i)
    {
        sum = 0;
        x = (1<<i);
        for(j=0; j<n; ++j)
        {
            if(array[j] & x)
                sum++;
        }
        if(sum % 3)
            result |= x;
    }
    return result;
}

int main()
{
    int arr[] = {12, 1, 12, 3, 12, 1, 1, 2, 3, 2, 2, 3, 7};
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("The element with single occurrence is %d ",
            getSingle1(arr, n));
    return 0;
}