#include <stdio.h>
#include<stdlib.h>


struct array
{
    int *A;
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


void Append(struct array *arr,int x)
{
    if(arr->length<arr->size)
        arr->A[arr->length++]=x;
}


void Insert(struct array *arr,int index,int x)
{
    int i;
    if(index>=0 && index <=arr->length)
    {
        for(i=arr->length; i>index; i--)
            arr->A[i]=arr->A[i-1];
        arr->A[index]=x;
        arr->length++;
    }
}


int Delete(struct array *arr,int index)
{
    int x=0;
    int i;
    if(index>=0 && index<arr->length)
    {
        x=arr->A[index];
        for(i=index; i<arr->length-1; i++)
            arr->A[i]=arr->A[i+1];
        arr->length--;
        return x;
    }
    return 0;
}


void swap(int *x,int *y)
{
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
}
int linearSearch(struct array *arr, int x)
{
    int i;
    for(i=0; i<arr->length; i++)
    {
        if(x==arr->A[i])
        {
            return i;
        }
    }
    return -1;
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


void insertSortedArray(struct array *arr,int x)
{
    int i=arr->length-1;
    if(arr->length==arr->size)
        return;
    while(i>=0 && arr->A[i]>x)
    {
        arr->A[i+1]=arr->A[i];
        i--;
    }
    arr->A[i+1]=x;
    arr->length++;

}


int isSorted(struct array arr)
{
    int i;
    for(int i=0; i<arr.length-1; i++)
    {
        if(arr.A[i]>arr.A[i+1])
            return 0;
    }
    return 1;
}


void rearrange(struct array *arr)
{
    int i=0;
    int temp;
    int j=arr->length-1;
    while(i<j)
    {
        while(arr->A[i]<0)
        {
            i++;
        }
        while(arr->A[j]>=0)
        {
            j--;
        }
        if(i<j)
        {
            temp=arr->A[i];
            arr->A[i]=arr->A[j];
            arr->A[j]=temp;
        }
    }
    printf("RUMI\n\n\n");

}


struct array* merge(struct array *arr1, struct array *arr2)
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
        else
        {
            arr3->A[k++]=arr2->A[j];
            j++;

        }

    }
    for( ; i<arr1->length; i++)
    {
        arr3->A[k++]=arr1->A[i];
    }
    for( ; j<arr2->length; j++)
    {
        arr3->A[k++]=arr2->A[j];
    }
    arr3->length= arr1->length + arr2->length;
    arr3->size=20;

    return arr3;

}


struct array* Union(struct array *arr1, struct array *arr2)
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
            arr3->A[k++]=arr2->A[j];
            j++;

        }
        else
        {
            arr3->A[k++]=arr1->A[i];
            i++;
            j++;
        }

    }
    for( ; i<arr1->length; i++)
    {
        arr3->A[k++]=arr1->A[i];
    }
    for( ; j<arr2->length; j++)
    {
        arr3->A[k++]=arr2->A[j];
    }
    arr3->length= k;
    arr3->size=20;

    return arr3;

}


struct array* Intersection(struct array *arr1, struct array *arr2)
{
    int i=0,j=0,k=0;
    struct array *arr3=(struct array *)malloc(sizeof(struct array));
    while(i<arr1->length && j<arr2->length)
    {
        if(arr1->A[i]<arr2->A[j])
        {
            //arr3->A[k++]=arr1->A[i];
            i++;
        }
        else if(arr2->A[j]<arr1->A[i])
        {
            //arr3->A[k++]=arr2->A[j];
            j++;

        }
        else if(arr2->A[j]==arr1->A[i])
        {
            arr3->A[k++]=arr1->A[i];
            i++;
            j++;
        }

    }

    arr3->length= k;
    arr3->size=20;

    return arr3;

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
    struct array arr1;
    int choice;
    printf("Size of the array \n");
    scanf("%d",&arr1.size);
    arr1.A=(int *)malloc(arr1.size*sizeof(int));
    arr1.length=0;
    do
    {
        printf("\n\nMenu\n\n");
        printf("1. Insert\n");
        printf("2. Delete\n");
        printf("3. Search\n");
        printf("4. Sum\n");
        printf("5. Display\n");
        printf("6.Exit\n");
        printf("\n\n\n");
        printf("Enter your choice : ");
        scanf("%d",&choice);


        int element, index;

        switch(choice)
        {
        case 1:
            printf("Enter an element and index\n");
            scanf("%d%d", &element, &index);
            Insert(&arr1,index,element);
            break;
        case 2:
            printf("Enter index : ");
            scanf("%d",&index);
            int x=Delete(&arr1,index);
            printf("Deleted Element is %d\n",x);
            break;
        case 3:
            printf("Enter element to search \n ");
            scanf("%d",&element);
            index=linearSearch(&arr1,element);
            printf("Element index : %d",index);
            break;
        case 4:
            printf("Sum is %d\n",Sum(arr1));
            break;
        case 5:
            Display(arr1);


        }
    } while(choice < 6);

        return 0;
}
