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
    cout<<endl<<endl;;
}

void Duplicate_Elements_sorted(struct Array arr)
{
    //cout<<"RUMI"<<endl;

    int lastDuplicate=0;

    cout<<"Duplicate elements are : "<<endl;

    for(int i=0; i<arr.length; i++)
    {
        if( arr.A[i] == arr.A[i+1] && arr.A[i] != lastDuplicate )
        {
            cout<<arr.A[i]<<" ";
            lastDuplicate=arr.A[i];
        }
    }
    cout<<endl<<endl;;
}

void Count_Duplicate(struct Array arr)
{
    //cout<<"RUMI"<<endl;

    cout<<"Number of Duplicate elements are : "<<endl;

    for(int i=0; i<arr.length; i++)
    {
        if( arr.A[i] == arr.A[i+1] )
        {
            int j=i+1;
            while(arr.A[j]==arr.A[i])
            {
                j++;
            }
            cout<<arr.A[i]<<" is appending "<<j-i<<" times."<<endl;
            i=j-1;
        }
    }
    cout<<endl<<endl;;
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
    struct Array arr1 = {{6, 7, 8, 8, 10, 11, 11, 11, 12, 13}, 20, 10};

    cout<<"Duplicate elements in sorted array \n"<<endl;
    display(arr1);
    //missing_elements(arr1);

    Duplicate_Elements_sorted(arr1);
    cout<<"Number of Duplicate elements in sorted array \n"<<endl;
    Count_Duplicate(arr1);


    return 0;
}

