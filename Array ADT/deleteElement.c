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

int main()
{
    struct array arr= {{5,10,15,20,25},20,5};

    Display(arr);

    int index, value,i;
    printf("Enter the Index which element wants to delete \n");
    scanf("%d",&index);

    printf("\n\n");

    int x;

    if(index>=0 && index<=arr.length)
    {
        x=arr.A[index];
        for(i=index; i<arr.length-1; i++)
        {
            arr.A[i]=arr.A[i+1];
        }

        arr.length--;

    }
    printf("The deleted element is %d\n\n", x);



    Display(arr);


    return 0;
}


