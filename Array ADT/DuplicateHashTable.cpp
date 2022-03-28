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

void Duplicate_hashTable(struct Array arr)
{
    int HT_l=Max(arr);
    int *HashTable=(int *) malloc (sizeof(int)*HT_l);

    for(int i=0;i<=HT_l;i++)
    {
        HashTable[i]=0;
    }

    for(int i=0;i<arr.length;i++)
    {
        HashTable[arr.A[i]]++;
    }

    for(int i=0;i<=HT_l;i++)
    {
        if(HashTable[i]>1)
        {
            cout<<i<<" repeated "<< HashTable[i]<<" times."<<endl;
        }
    }

}

int main()
{
    struct Array arr1 = {{6, 7, 8, 8, 10, 11, 11, 11, 12, 13}, 20, 10};
    display(arr1);

    cout<<"Duplicate elements in sorted array \n"<<endl;
    Duplicate_hashTable(arr1);


    return 0;

}
