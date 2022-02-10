#include <stdio.h>
#include<stdlib.h>


class Array
{
private:
    int *A;
    int Size;
    int length;
public:
    Array()
    {
        Size=20;
        length=0;
    }
    Array(int sz)
    {
        Size=20;
        length=0;
        A=new int[Size];
    }
    ~Array()
    {
        delete []A;
    }


    void Display();
    void Append(int x);
    void Insert(int index,int x);
    int Delete(int index);
    void Swap(int *x,int *y);
    int linearSearch( int x);
    int BinarySearch( int key);
    int RecursiveBinarySearch(int l,int h, int key);
    int Get( int index);
    int Set( int index,int value);
    int Max();
    int Min();
    int Sum();
    float Avg();
    void reverse1();
    void reverse2();
    void insertSortedArray(int x);
    int isSorted();
    void rearrange();
    Array* Merge(Array arr2);
    Array* Union(Array arr2);
    Array* Intersection(Array arr2);
    Array* Difference(Array arr2);

};


void Array:: Display()
{
    int i;
    printf("Array size = %d ",Size);
    printf("\n");
    printf("Array length = %d ",length);
    printf("\n");
    printf("Array elements are \n");
    for(i=0; i<length; i++)
    {
        printf("%d ",A[i]);
    }
    printf("\n\n\n");
}


void Array:: Append(int x)
{
    if(length<Size)
        A[length++]=x;
}


void Array::Insert(int index, int x)
{
    int i;
    if(index>=0 && index <=length)
    {
        for(i=length; i>index; i--)
            A[i]=A[i-1];
        A[index]=x;
        length++;
    }
}


int Array::Delete(int index)
{
    int x=0;
    int i;
    if(index>=0 && index<length)
    {
        x=A[index];
        for(i=index; i<length-1; i++)
            A[i]=A[i+1];
        length--;
        return x;
    }
    return 0;
}


void Array::Swap(int *x,int *y)
{
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
}
int Array::linearSearch(int x)
{
    int i;
    for(i=0; i<length; i++)
    {
        if(x==A[i])
        {
            return i;
        }
    }
    return -1;
}


int Array::BinarySearch(int key)
{
    int l=0;
    int h=length-1;
    int mid;
    while(l<=h)
    {
        mid=(l+h)/2;
        if(key==A[mid])
            return mid;
        else if(key<A[mid])
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


int Array::RecursiveBinarySearch(int l,int h, int key)
{
    int mid=0;
    if(l<=h)
    {
        mid=(l+h)/2;
        if(key==A[mid])
            return mid;
        else if(key<A[mid])
            return RecursiveBinarySearch(l,mid-1,key);
        else
            return RecursiveBinarySearch(mid+1,h,key);
    }
    return -1;

}


int Array::Get(int index)
{
    if(index>=0 && index<length)
        return A[index];
    return -1;
}

int Array::Set(int index,int value)
{
    if(index>=0 && index<length)
        A[index]=value;

}

int Array::Max()
{
    int Max=A[0];
    int i;
    for(i=1; i<length; i++)
    {
        if(A[i]>Max)
            Max=A[i];
    }
    return Max;
}

int Array::Min()
{
    int Min=A[0];
    int i;
    for(i=1; i<length; i++)
    {
        if(A[i]<Min)
            Min=A[i];
    }
    return Min;
}

int Array::Sum()
{
    int sum = 0;
    int i;
    for(i=0; i<length; i++)
        sum += A[i];
    return sum;
}
float Array::Avg()
{
    return (float)Sum()/length;
}


void Array::reverse1()
{
    int *B;
    int i,j;
    B = (int *) malloc (length * sizeof (int));
    for(i=length-1, j=0; i>=0; i--,j++)
        B[j] =A[i];
    for(i=0; i<length; i++)
        A[i] = B[i];
}

void Array::reverse2()
{
    int i,j;

    for(i=0,j=length-1; i<j; i++,j--)
    {

        Swap(&A[i],&A[j]);
    }
}


void Array::insertSortedArray(int x)
{
    int i=length-1;
    if(length==Size)
        return;
    while(i>=0 && A[i]>x)
    {
        A[i+1]=A[i];
        i--;
    }
    A[i+1]=x;
    length++;

}


int Array::isSorted()
{
    int i;
    for(int i=0; i<length-1; i++)
    {
        if(A[i]>A[i+1])
            return 0;
    }
    return 1;
}


void Array::rearrange()
{
    int i=0;
    int temp;
    int j=length-1;
    while(i<j)
    {
        while(A[i]<0)
        {
            i++;
        }
        while(A[j]>=0)
        {
            j--;
        }
        if(i<j)
        {
            temp=A[i];
            A[i]=A[j];
            A[j]=temp;
        }
    }
    printf("RUMI\n\n\n");

}

 Array* Array:: Merge(Array arr2)
{
    int i=0,j=0,k=0;
    Array *arr3=new Array(length+arr2.length);
    while(i<length && j<arr2.length)
    {
        if(A[i]<arr2.A[j])
        {
            arr3->A[k++]=A[i];
            i++;
        }
        else
        {
            arr3->A[k++]=arr2.A[j];
            j++;

        }

    }
    for( ; i<length; i++)
    {
        arr3->A[k++]=A[i];
    }
    for( ; j<arr2.length; j++)
    {
        arr3->A[k++]=arr2.A[j];
    }
    arr3->length= length + arr2.length;
    //arr3->Size=20;

    return arr3;

}


Array* Array:: Union(Array arr2)
{
    int i=0,j=0,k=0;
    Array *arr3=new Array(length+arr2.length);
    while(i<length && j<arr2.length)
    {
        if(A[i]<arr2.A[j])
        {
            arr3->A[k++]=A[i];
            i++;
        }
        else if(arr2.A[j]<A[i])
        {
            arr3->A[k++]=arr2.A[j];
            j++;

        }
        else
        {
            arr3->A[k++]=A[i];
            i++;
            j++;
        }

    }
    for( ; i<length; i++)
    {
        arr3->A[k++]=A[i];
    }
    for( ; j<arr2.length; j++)
    {
        arr3->A[k++]=arr2.A[j];
    }
    arr3->length= k;
    //arr3->Size=20;

    return arr3;

}


Array* Array::Intersection( Array arr2)
{
    int i=0,j=0,k=0;
    Array *arr3=new Array(length+arr2.length);
    while(i<length && j<arr2.length)
    {
        if(A[i]<arr2.A[j])
        {
            //arr3->A[k++]=arr1->A[i];
            i++;
        }
        else if(arr2.A[j]<A[i])
        {
            //arr3->A[k++]=arr2->A[j];
            j++;

        }
        else if(arr2.A[j]==A[i])
        {
            arr3->A[k++]=A[i];
            i++;
            j++;
        }

    }

    arr3->length= k;
    //arr3->Aize=20;

    return arr3;

}

Array* Array:: Difference(Array arr2)
{
    int i=0,j=0,k=0;
    Array *arr3=new Array(length+arr2.length);
    while(i<length && j<arr2.length)
    {
        if(A[i]<arr2.A[j])
        {
            arr3->A[k++]=A[i];
            i++;
        }
        else if(arr2.A[j]<A[i])
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
    for( ; i<length; i++)
    {
        arr3->A[k++]=A[i];
    }
    arr3->length= k;
    //arr3->Size=20;

    return arr3;

}

int main()
{
    class Array *arr1;
    int choice, sz;
    printf("Size of the array \n");
    scanf("%d",&sz);
    arr1=new Array(sz);
    //arr1.length=0;
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


        int element, index, x;

        switch(choice)
        {
        case 1:
            printf("Enter an element and index\n");
            scanf("%d%d", &element, &index);
            arr1->Insert(index,element);
            break;
        case 2:
            printf("Enter index : ");
            scanf("%d",&index);
            //int x=arr1.Delete(index);
            printf("Deleted Element is %d\n",arr1->Delete(index));
            break;
        case 3:
            printf("Enter element to search \n ");
            scanf("%d",&x);
            index=arr1->linearSearch(x);
            printf("Element index : %d",index);
            break;
        case 4:
            printf("Sum is %d\n",arr1->Sum());
            break;
        case 5:
            arr1->Display();


        }
    }
    while(choice < 6);

    return 0;
}

