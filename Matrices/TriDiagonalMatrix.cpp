#include<bits/stdc++.h>

using namespace std;

class TriDiagonal
{
private:
    int n;
    int *A;
public:
    TriDiagonal()
    {
        n=2;
        A=new int[3*n-2];
    }
    TriDiagonal(int n)
    {
        this->n=n;
        A=new int[3*n-2];
    }
    void Set(int i,int j,int x);

    int Get(int i,int j);

    void display();

    ~TriDiagonal()
    {
        delete []A;
    }
};

void TriDiagonal::Set(int i,int j,int value)
{
    if(i-j==1)
    {
       A[i-2]=value;
    }
    else if(i-j==0)
    {
        A[n-1+i-1]=value;
    }
    else if(i-j==-1)
    {
        A[2*n-1+i-1]=value;
    }
}

int TriDiagonal::Get(int i,int j)
{
    if(i-j==1)
    {
        return A[i-2];
    }
    else if(i-j==0)
    {
        return A[n-1+i-1];
    }
    else if(i-j==-1)
    {
        return A[2*n-1+i-1];
    }
    else
    {
        return 0;
    }
}

void TriDiagonal::display()
{
    cout<<"The Tri_Diagonal matrix is : "<<endl;
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
    TriDiagonal dm(d);

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
