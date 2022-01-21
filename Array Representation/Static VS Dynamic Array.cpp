#include<bits/stdc++.h>

using namespace std;

void StaticArray()
{
    int arr[5]={10,20,30,40,50};
    cout<<"The Static array is : "<<endl;
    for(int i=0;i<5;i++)
    {
        cout<<"arr["<<i<<"] = "<<arr[i]<<endl;
    }
}

void DynamicArray()
{
    int *p;
    p=(int*)malloc(5*sizeof(int));
    p[0]=1;
    p[1]=2;
    p[2]=3;
    p[3]=4;
    p[4]=5;
    cout<<"The Dynamic array is : "<<endl;
    for(int i=0;i<5;i++)
    {
        cout<<"p["<<i<<"] = "<<p[i]<<endl;
    }
}

int main()
{
    StaticArray();
    DynamicArray();

    return 0;

}
