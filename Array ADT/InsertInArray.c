#include<stdio.h>
#include<stdlib.h>

struct array
{
    int A[20];
    int size;
    int length;
};

/*void insert(struct array arr)
{
    int index, value;
    printf("Enter the Index where want to insert \n");
    scanf("%d",&index);
        printf("\n");
    printf("Enter the Value what want to insert \n");
    scanf("%d",&value);
        printf("\n");

    for(i=arr.length;i>index;i--)
    {
        arr.A[i]=arr.A[i-1];
    }
    arr.A[index]=value;
    arr.length++;
    printf("\n");
}*/

void Display(struct array arr)
{
    int i;
    printf("Array size = %d ",arr.size);
    printf("\n");
    printf("Array length = %d ", arr.length);
    printf("\n");
    printf("Array elements are \n");
    for(i=0;i<arr.length;i++)
    {
        printf("%d ", arr.A[i]);
    }
    printf("\n\n\n");
}

int main()
{
    struct array arr={{5,10,15,20,25},20,5};

    Display(arr);

    int index, value,i;
    printf("Enter the Index where want to insert \n");
    scanf("%d",&index);
        printf("\n");
    printf("Enter the Value what want to insert \n");
    scanf("%d",&value);
        printf("\n");

    for(i=arr.length;i>index;i--)
    {
        arr.A[i]=arr.A[i-1];
    }
    arr.A[index]=value;
    arr.length++;
    printf("\n");


    Display(arr);


    return 0;
}


