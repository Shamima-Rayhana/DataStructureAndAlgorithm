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

int BinarySearch(struct array arr, int key)
{
    int l=0;
    int h=arr.length-1;
    int mid;
    while(l<=h)
    {
        mid=(l+h)/2;
        if(key==arr.A[mid])
            return mid;
        else if(key<arr.A[mid])
        {
            h=mid-1;
        }
        else
        {
            l=mid+1;
        }
    }
    return -1;

}

int main()
{
    struct array arr= {{5,10,15,20,25},20,5};
    Display(arr);
    int x;
    printf("The element which want to find\n");
    scanf("%d", &x);
    printf("The index of %d is %d .\n", x, BinarySearch(arr,x));

    Display(arr);


    return 0;
}





