#include<bits/stdc++.h>

using namespace std;

//Auther: Shamima Rayhana Rumi
//Date: 21-05-2022
//Content: Symmetric Matrix (Upper triangular) in C++

class UpperTriangular
{
private:
    int n;
    int *A;
public:
    UpperTriangular()
    {
        n=2;
        A=new int[2*(2+1)/2];
    }
    UpperTriangular(int n)
    {
        this->n=n;
        A=new int[n*(n+1)/2];
    }
    void Set(int i,int j,int x);

    int Get(int i,int j);

    void display();

    ~UpperTriangular()
    {
        delete []A;
    }
};

void UpperTriangular::Set(int i,int j,int x)
{
    if(i<=j)
    {
        A[(i-1)*n-((i-2)*(i-1))/2+j-i]=x;
    }
}

int UpperTriangular::Get(int i,int j)
{
    if(i<=j)
    {
        return A[(i-1)*n-((i-2)*(i-1))/2+j-i];
    }
    else
        return A[(j-1)*n-((j-2)*(j-1))/2+i-j];
}

void UpperTriangular::display()
{
    cout<<"The Symmetric matrix is : "<<endl;
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=n; j++)
        {
            if(i<=j)
                cout<<A[(i-1)*n-((i-2)*(i-1))/2+(j-i)]<<" ";
            else
                cout<<A[(j-1)*n-((j-2)*(j-1))/2+i-j]<<" ";
        }
        cout<<endl;
    }
}

int main()
{
    int d;
    cout<<"Enter the dimension: ";
    cin>>d;
    UpperTriangular Um(d);

    int value;
    cout<<"Enter the elements: "<<endl;
    for(int i=1; i<=d; i++)
    {
        for(int j=1; j<=d; j++)
        {
            cin>>value;
            Um.Set(i,j,value);
        }
    }

    Um.display();
    return 0;

}
