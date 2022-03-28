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

void display(struct Array arr)
{
    cout<<"The array is : \n"<<endl;
    for(int i=0; i<arr.length; i++)
        cout<<arr.A[i]<<" ";
    printf("\n\n");
}



void Duplicate_Unsorted_array(struct Array arr)
{
    int Count=0;
    for(int i=0; i<arr.length-1; i++)
    {
        Count=1;
        if(arr.A[i]!=-1)
        {
            for(int j=i+1; j<arr.length; j++)
            {
                if(arr.A[i]==arr.A[j])
                {
                    Count++;
                    arr.A[j]=-1;
                }

            }
            if(Count>1)
                cout<<arr.A[i]<<" repeated "<<Count<<" times."<<endl;
        }
    }
}

int main()
{
    struct Array arr1 = {{6, 7, 8, 8, 10, 11, 11, 11, 12, 13}, 20, 10};
    display(arr1);

    cout<<"Duplicate elements in Unsorted array \n"<<endl;
    Duplicate_Unsorted_array(arr1);


    return 0;

}

