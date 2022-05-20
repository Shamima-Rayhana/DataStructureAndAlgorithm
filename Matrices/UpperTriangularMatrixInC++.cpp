#include<bits/stdc++.h>

using namespace std;

//Auther: Shamima Rayhana Rumi
//Date: 20-05-2022
//Content: Upper triangular matrix in C++

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
    void Set(int i,int j,int x,int c);

    int Get(int i,int j,int c);

    void display(int c);

    ~UpperTriangular()
    {
        delete []A;
    }
};

void UpperTriangular::Set(int i,int j,int x,int c)
{
    if(c==1 && i<=j)
    {
        A[(i-1)*n-((i-2)*(i-1))/2+j-i]=x;
    }
    else if(i<=j)
    {
        A[j*(j-1)/2+(i-1)]=x;
    }
}

int UpperTriangular::Get(int i,int j, int c)
{
    if(c==1 && i<=j)
    {
        return A[(i-1)*n-((i-2)*(i-1))/2+j-i];
    }
    else if(i<=j)
    {
        return A[j*(j-1)/2+(i-1)];
    }
    else
        return 0;
}

void UpperTriangular::display(int c)
{
    cout<<"The Upper Triangular matrix is : "<<endl;
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=n; j++)
        {
            if(c==1 && i<=j)
                cout<<A[(i-1)*n-((i-2)*(i-1))/2+(j-i)]<<" ";
            else if(i<=j)
                cout<<A[j*(j-1)/2+(i-1)]<<" ";
            else
                cout<<0<<" ";
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

    int value, choice;
    cout<<"Enter your choice : "<<endl;
    cout<<"1 for row major formula or 2 for column major formula"<<endl;
    cin>>choice;
    cout<<"Enter the elements: "<<endl;
    for(int i=1; i<=d; i++)
    {
        for(int j=1; j<=d; j++)
        {
            cin>>value;
            Um.Set(i,j,value,choice);
        }
    }

    Um.display(choice);
    return 0;

}
