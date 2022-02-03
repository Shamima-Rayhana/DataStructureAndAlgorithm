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

int Get(struct array arr, int index)
{
    if(index>=0 && index<arr.length)
        return arr.A[index];
    return -1;
}

int Set(struct array *arr, int index,int value)
{
    if(index>=0 && index<arr->length)
        arr->A[index]=value;

}

int Max(struct array arr)
{
    int max=arr.A[0];
    int i;
    for(i=1; i<arr.length; i++)
    {
        if(arr.A[i]>max)
            max=arr.A[i];
    }
    return max;
}

int Min(struct array arr)
{
    int min=arr.A[0];
    int i;
    for(i=1; i<arr.length; i++)
    {
        if(arr.A[i]<min)
            min=arr.A[i];
    }
    return min;
}

int Sum(struct array arr)
{
    int sum = 0;
    int i;
    for(i=0; i<arr.length; i++)
        sum += arr.A[i];
    return sum;
}
float Avg(struct array arr)
{
    return (float)Sum(arr)/arr.length;
}

int main()
{
    struct array arr= {{5,10,15,20,25},20,5};
    Display(arr);
    int index;
    printf("Which index want to get \n");
    scanf("%d", &index);
    printf("Value of index %d is %d.\n\n",index,Get(arr,index));

    int index2, value;
    printf("Which index want to set value \n");
    scanf("%d", &index2);
    printf("Which Value want to set at index %d \n", index2);
    scanf("%d",&value);
    Set(&arr, index2, value);
    Display(arr);

    printf("Max element is %d\n", Max(arr));

    printf("Min element is %d\n", Min(arr));

    printf("Sum of all element is %d\n", Sum(arr));
    printf("Average of all element is %f\n", Avg(arr));


    return 0;
}






