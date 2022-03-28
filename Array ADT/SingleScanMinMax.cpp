#include<bits/stdc++.h>

using namespace std;

struct Array
{
    int A[20];
    int Size;
    int length;
};


void display(struct Array arr)
{
    cout<<"The array is : \n"<<endl;
    for(int i=0; i<arr.length; i++)
        cout<<arr.A[i]<<" ";
    printf("\n\n");
}


void Min_Max(struct Array arr)
{
    int Min=arr.A[0];
    int Max=arr.A[0];

    for(int i=1; i<arr.length;i++)
    {
        if(arr.A[i]<Min)
            Min=arr.A[i];
        else if(arr.A[i]>Max)
            Max=arr.A[i];
    }
    cout<<"Min = "<<Min<<endl;
    cout<<"Max = "<<Max<<endl;
}

int main()
{
    struct Array arr1 = {{6, 7, 8, 8, 10, 11, 11, 11, 12, 13}, 20, 10};
    display(arr1);

    cout<<"Finding Min and Max by single scan :\n"<<endl;

    Min_Max(arr1);

    return 0;

}




