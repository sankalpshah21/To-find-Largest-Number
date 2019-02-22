#include <stdio.h>

int main()
{
    int i,a,n;
    int arr[10]={10,20,15,21,16};


    // Loop to store largest number to arr[0]
    for(i = 1; i < 6; ++i)
    {
       // Change < to > if you want to find the smallest element
       if(arr[0] < arr[i])
           arr[0] = arr[i];
    }
    printf("Largest element = %d", arr[0]);

    return 0;
}