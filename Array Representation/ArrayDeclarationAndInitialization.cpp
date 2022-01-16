#include<bits/stdc++.h>

using namespace std;

int main()
{
    //Array Declaration and Initialization

    int A[10];//declare with size 10 and initialize with garbage value.
    int B[5]={1,2,3,4,5};//size 5 and no garbage value.
    int C[7]={5,10,15,20};//size 7 and rest of the value is zero not garbage.
    int D[5]={0};//size 5 and all elements are zero.
    int E[]={10,20,30,40,50,60,70,80,90};//size 10 with respect to given value.

    //Accessing array values
    cout<<"Access array B using ArrayName[index] :"<<endl;
    for(int i=0;i<5;i++)
    {
       cout<<B[i]<<" ";
    }
    cout<<endl;
    cout<<"Access array C using index[ArrayName] :"<<endl;
    for(int i=0;i<7;i++)
    {
        cout<<i[C]<<" ";
    }
    cout<<endl;

    cout<<"Access array B using Pointer :"<<endl;
    for(int i=0;i<5;i++)
    {
        cout<<*(B+i)<<" ";
    }
    cout<<endl;

    cout<<"Access index address of array E :"<<endl;
    for(int i=0;i<10;i++)
    {
       // cout<<&E[i]<<" "; it is not equal with %u.
        printf("Address of index %d is %u \n",i,&E[i]);
    }
    cout<<endl;

    return 0;
}
