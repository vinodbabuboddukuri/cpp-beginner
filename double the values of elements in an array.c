double the given array using function in C programming

Note: function should return the array as output instead of printing the function.
Example: [10,20,-5,9] -> [20,40,-10,18]

hint : pointers - call by reference

#include <stdio.h>

int* doubleArray(int* arr,int n)
{
    for(int i = 0; i < n; i++)
    {
        arr[i]=arr[i]*2;
    }
    return arr;
}

int main()
{
    int n;scanf("%d",&n);
    int* arr = (int*)malloc(n * sizeof(int));
    for(int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    int *op=doubleArray(arr,n);
    for(int i = 0; i < n; i++)
    {
        printf("%d ",op[i]);
    }
    return 0;
}
