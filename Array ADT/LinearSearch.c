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


int linearSearch(struct array *arr, int x)
{
    int i;
    for(i=0;i<arr->length;i++)
    {
        if(x==arr->A[i])
        {
            return i;
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
    printf("The index of the key element is %d .\n", linearSearch(&arr,x));

    Display(arr);


    return 0;
}




