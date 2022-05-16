#include<bits/stdc++.h>

using namespace std;

class LowerTriangular
{
private:
    int n;
    int *A;
public:
    LowerTriangular()
    {
        n=2;
        A=new int[2*(2+1)/2];
    }
    LowerTriangular(int n)
    {
        this->n=n;
        A=new int[n*(n+1)/2];
    }
    void Set(int i,int j,int x);

    int Get(int i,int j);

    void display();

    ~LowerTriangular()
    {
        delete []A;
    }
};

void LowerTriangular::Set(int i,int j,int x)
{
    if(i>=j)
    {
        A[i*(i-1)/2+j-1]=x;
    }
}

int LowerTriangular::Get(int i,int j)
{
    if(i>=j)
    {
        return A[i*(i-1)/2+j-1];
    }
    else
        return 0;
}

void LowerTriangular::display()
{
    cout<<"The Lower Triangular matrix is : "<<endl;
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=n; j++)
        {
            if(i>=j)
                cout<<A[i*(i-1)/2+j-1]<<" ";
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
    LowerTriangular lm(d);

    int value;
    cout<<"Enter the elements: "<<endl;
    for(int i=1; i<=d; i++)
    {
        for(int j=1; j<=d; j++)
        {
            cin>>value;
            lm.Set(i,j,value);
        }
    }

    lm.display();
    return 0;

}

