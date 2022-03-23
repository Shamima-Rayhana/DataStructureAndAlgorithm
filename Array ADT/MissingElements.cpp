#include<bits/stdc++.h>

using namespace std;

struct Array
{
    int A[20];
    int Size;
    int length;
};

int Max(struct Array arr)
{
    int maximum = arr.A[0];

    for(int i=1; i<arr.length; i++)
    {
        if(arr.A[i] > maximum)
            maximum = arr.A[i];
    }
    return maximum;
}


int Min(struct Array arr)
{
    int minimum = arr.A[0];

    for(int i=1; i<arr.length; i++)
    {
        if(arr.A[i] < minimum)
            minimum = arr.A[i];
    }
    return minimum;
}

//Finding missing elements from unsorted elements.

void missing_elements ( struct Array arr )
{
    int low = Min(arr);
    int high = Max(arr);
    int *B = (int*) malloc (sizeof(int)*high);

    for(int i=0; i<=high; i++)
    {
        B[i]=0;
    }

    for(int i=0; i<arr.length; i++)
    {
        B[arr.A[i]]++;
    }
    cout<<"The missing elements are "<<endl;
    for(int i=low; i<=high; i++)
    {
        if(B[i]==0)
            cout<<i<<" ";
    }
    cout<<endl;
}

void display(struct Array arr)
{
    cout<<"The array is : \n"<<endl;
    for(int i=0; i<arr.length; i++)
        cout<<arr.A[i]<<" ";
    printf("\n\n");
}

int main()
{
    struct Array arr1 = {{6, 7, 8, 9, 10, 3, 5, 1, 12, 13}, 20, 10};

    cout<<"Missing elements in unsorted array \n"<<endl;
    display(arr1);
    missing_elements(arr1);


    return 0;
}
