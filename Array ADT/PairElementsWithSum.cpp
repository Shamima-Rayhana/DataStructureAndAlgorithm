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


void Pair_elements(struct Array arr,int sum)
{
    for(int i=0; i<arr.length-1; i++)
    {
        for(int j=i+1; j<arr.length; j++)
        {
            if((arr.A[i]+arr.A[j])==sum)
                cout<<arr.A[i]<<" + "<<arr.A[j]<<" = "<<sum<<endl;
        }
    }
}

void Pair_elements_hashTable(struct Array arr,int sum)
{
    int HT_l=Max(arr);
    int *HashTable=(int *) malloc (sizeof(int)*HT_l);

    for(int i=0; i<=HT_l; i++)
    {
        HashTable[i]=0;
    }

    for(int i=0; i<arr.length; i++)
    {
        if(HashTable[sum-arr.A[i]] != 0)
                 {
                     cout<<arr.A[i]
                             <<" + "<<sum-arr.A[i]<<" = "<<sum<<endl;

                     }
        HashTable[arr.A[i]]++;
    }
}

int main()
{
    struct Array arr1 = {{6, 7, 8, 11, 10, 11, 8, 11, 13, 12}, 20, 10};
    display(arr1);

    cout<<"Pair Elements are :\n"<<endl;
    Pair_elements(arr1,17);
    cout<<endl;
    cout<<"Pair Elements using hash table are :\n"<<endl;

    Pair_elements_hashTable(arr1,17);

    return 0;

}


