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


struct array* Difference(struct array *arr1, struct array *arr2)
{
    int i=0,j=0,k=0;
    struct array *arr3=(struct array *)malloc(sizeof(struct array));
    while(i<arr1->length && j<arr2->length)
    {
        if(arr1->A[i]<arr2->A[j])
        {
            arr3->A[k++]=arr1->A[i];
            i++;
        }
        else if(arr2->A[j]<arr1->A[i])
        {
            //arr3->A[k++]=arr2->A[j];
            j++;

        }
        else
        {
            //arr3->A[k++]=arr1->A[i];
            i++;
            j++;
        }

    }
    for( ; i<arr1->length; i++)
    {
        arr3->A[k++]=arr1->A[i];
    }
    arr3->length= k;
    arr3->size=20;

    return arr3;

}


int main()
{
    struct array arr1= {{1,3,6,7,9},20,5};
    struct array arr2= {{2,4,6,9,10},20,5};
    struct array *arr3;
    printf("1st array : \n");
    Display(arr1);
    printf("2nd array : \n");
    Display(arr2);
    printf("After Difference new  array : \n");
    arr3=Difference(&arr1,&arr2);
    Display(*arr3);


    return 0;
}













