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



void Pair_sorted(struct Array arr,int sum)
{
    //cout<<"RUMI"<<endl;
    int i=0;
    int j=arr.length-1;
    while(i<j)
    {
        if(arr.A[i]+arr.A[j]==sum)
        {
            //cout<<"RUMI"<<endl;
            cout<<arr.A[i]<<" + "<<arr.A[j]<<" = "<<sum<<endl;
            i++;
            j--;

        }
        else if(arr.A[i]+arr.A[j]<sum)
            i++;
        else
            j--;
    }
}

int main()
{
    struct Array arr1 = {{6, 7, 8, 8, 10, 11, 11, 11, 12, 13}, 20, 10};
    display(arr1);

    cout<<"Pair Elements in sorted array :\n"<<endl;

    Pair_sorted(arr1,17);

    return 0;

}



