#include<stdio.h>
#include<stdlib.h>

struct array
{
    int A[20];
    int size;
    int length;
};


void Display(struct array arr)
{
    int i;
    printf("Array size = %d ",arr.size);
    printf("\n");
    printf("Array length = %d ", arr.length);
    printf("\n");
    printf("Array elements are \n");
    for(i=0; i<arr.length; i++)
    {
        printf("%d ", arr.A[i]);
    }
    printf("\n\n\n");
}


int isSorted(struct array arr)
{
    int i;
    for(int i=0;i<arr.length-1;i++)
    {
        if(arr.A[i]>arr.A[i+1])
            return 0;
    }
    return 1;
}


int main()
{
    struct array arr= {{5,10,15,20,25},20,5};

    int x=isSorted(arr);
    if(x==1)
        printf("The array is sorted.\n");
    else
        printf("The array is unsorted.\n");
    Display(arr);


    return 0;
}








