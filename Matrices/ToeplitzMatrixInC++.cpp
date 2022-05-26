#include<bits/stdc++.h>

using namespace std;

/*
Author: Shamima Rayhana Rumi
Date: 26-05-2022
Content: Toeplitz matrix in C++
*/

class ToeplitzMatrix
{
private:
    int n;
    int *A;
public:
    ToeplitzMatrix()
    {
        n=2;
        A=new int[2*n-1];
    }
    ToeplitzMatrix(int n)
    {
        this->n=n;
        A=new int[2*n-1];
    }
    void Set(int i,int j,int x);

    int Get(int i,int j);

    void display();

    ~ToeplitzMatrix()
    {
        delete []A;
    }
};

void ToeplitzMatrix::Set(int i,int j,int value)
{
    if(i<=j)
    {
        A[j-i]=value;
    }
    else if(i>j)
    {
        A[n-1+i-j]=value;
    }
}

int ToeplitzMatrix::Get(int i,int j)
{
        if(i<=j)
    {
        return A[j-i];
    }
    else if(i>j)
    {
        return A[n-1+i-j];
    }
}

void ToeplitzMatrix::display()
{
    cout<<"The Toeplitz matrix is : "<<endl;
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=n; j++)
        {
            cout<<Get(i,j)<<" ";
        }
        cout<<endl;
    }
}

int main()
{
    int d;
    cout<<"Enter the dimension: ";
    cin>>d;
    ToeplitzMatrix dm(d);

    int value;
    cout<<"Enter the elements: "<<endl;
    for(int i=1; i<=d; i++)
    {
        for(int j=1; j<=d; j++)
        {
            cin>>value;
            dm.Set(i,j,value);
        }
    }

    dm.display();
    return 0;

}
