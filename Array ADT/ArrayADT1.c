#include<stdio.h>
#include<stdlib.h>

struct array
{
    int *A;
    int size;
    int length;
};

void Get(struct array arr)
{
    int i;
    printf("Enter the elements \n");
    for(i=0;i<arr.length;i++)
    {
        scanf("%d", &arr.A[i]);
    }

}

void Display(struct array arr)
{
    int i;
    printf("Array elements are \n");
    for(i=0;i<arr.length;i++)
    {
        printf("%d ", arr.A[i]);
    }
}

int main()
{
    struct array arr;
    printf("Enter size of an Array \n");
    scanf("%d", &arr.size);
    arr.A = (int *) malloc (arr.size*sizeof(int));
    //arr.length = 0;
    int n;
    printf("Enter the number of elements \n");
    scanf("%d", &n);
    arr.length=n;
    Get(arr);
    Display(arr);


    return 0;
}
