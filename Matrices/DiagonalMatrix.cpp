#include<bits/stdc++.h>

using namespace std;

class diagonal
{
private:
    int n;
    int *A;
public:
    diagonal()
    {
        n=2;
        A=new int[2];
    }
    diagonal(int n)
    {
        this->n=n;
        A=new int[n];
    }
    void Set(int i,int j,int x);

    int Get(int i,int j);

    void display();

    ~diagonal()
    {
        delete []A;
    }
};

void diagonal::Set(int i,int j,int x)
{
    if(i==j)
    {
        A[i-1]=x;
    }
}

int diagonal::Get(int i,int j)
{
    if(i==j)
    {
        return A[i-1];
    }
    else
        return 0;
}

void diagonal::display()
{
    cout<<"The diagonal matrix is : "<<endl;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(i==j)
                cout<<A[i-1]<<" ";
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
    diagonal dm(d);

    int value;
    cout<<"Enter the elements: "<<endl;
    for(int i=0; i<d; i++)
    {
        for(int j=0; j<d; j++)
        {
            cin>>value;
            dm.Set(i,j,value);
        }
    }

    dm.display();
    return 0;

}
