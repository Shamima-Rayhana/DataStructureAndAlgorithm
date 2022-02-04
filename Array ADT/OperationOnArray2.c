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

void reverse(struct array *arr)
{
    int *B;
    int i,j;
    B = (int *) malloc (arr -> length * sizeof (int));
    for(i=arr->length-1, j=0; i>=0; i--,j++)
        B[j] = arr->A[i];
    for(i=0; i<arr->length; i++)
        arr->A[i] = B[i];
}

void reverse2(struct array *arr)
{
    int i,j;

    for(i=0,j=arr->length-1; i<j; i++,j--)
    {
        int temp=arr->A[i];
        arr->A[i]=arr->A[j];
        arr->A[j]=temp;
        //swap(&arr->A[i],&arr->A[j]);
    }
}



int main()
{
    struct array arr= {{5,10,15,20,25},20,5};
    Display(arr);

    reverse(&arr);
    Display(arr);

    reverse2(&arr);
    Display(arr);

    return 0;
}







