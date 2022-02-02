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

int RecursiveBinarySearch(struct array arr,int l,int h, int key)
{
    int mid=0;
    if(l<=h)
    {
        mid=(l+h)/2;
        if(key==arr.A[mid])
            return mid;
        else if(key<arr.A[mid])
            return RecursiveBinarySearch(arr,l,mid-1,key);
        else
            return RecursiveBinarySearch(arr,mid+1,h,key);
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
    printf("The index of %d is %d .\n", x, RecursiveBinarySearch(arr,0,arr.length-1,x));

    //Display(arr);


    return 0;
}





