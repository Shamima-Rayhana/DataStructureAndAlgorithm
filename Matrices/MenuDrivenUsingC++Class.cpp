#include<bits/stdc++.h>

using namespace std;

class DiagonalMatrix
{
private:
    int *A, n;

public:
    DiagonalMatrix();
    DiagonalMatrix(int n);

    void createDiagonalMatrix();
    void createMatrix();
    int getMatrix(int i, int j);
    void setMatrix(int i, int j, int x);
    void display();

    ~DiagonalMatrix();

};


DiagonalMatrix :: DiagonalMatrix()
{
    n = 3;
    A = new int[n];
    cout << "Default Constructor Called\n";
}

DiagonalMatrix :: DiagonalMatrix(int n)
{
    this->n = n;
    A = new int[n];
    cout << "Constructor with parameter (" << n << ") called\n";
}
DiagonalMatrix::~DiagonalMatrix()
{
    delete []A;
    cout << "\nDestructor called\n";
}

void DiagonalMatrix::createDiagonalMatrix()
{
    int value;
    cout << "\nEnter the elements (" << n << ") of the diagonal : " << endl;

    cout << "\t";
    for(int i=1; i<=n; i++)
    {
        cin >> value;
        A[i-1] = value;
    }
}

void DiagonalMatrix :: createMatrix()
{
    int value;
    cout << "\nEnter all the elements of (" << n << " * " << n << ") matrix\n";

    for(int i=1; i<=n; i++)
    {
        cout << "\t";
        for(int j=1; j<=n; j++)
        {
            cin >> value;
            if(i==j)
                A[i-1] = value;
        }
    }
}

int DiagonalMatrix:: getMatrix(int i,int j)
{
    if(i==j)
        return A[i-1];
    else
        return 0;

}
void DiagonalMatrix:: setMatrix(int i,int j,int x)
{
    if(i==j)
        A[i-1]=x;
    else A[i-1]=0;

}
void DiagonalMatrix::display()
{

    cout<<"\nThe diagonal Matrix is"<<endl;

    for(int i=1;i<=n;i++)
    {
        cout << "\t";
        for(int j=1;j<=n;j++)
        {
            if(i==j)
            {
                cout<<A[i-1]<<" ";
            }
            else
                cout<<0<<" ";
        }
        cout<<endl;
    }
}

int main()
{
    int n;
    cout<<"Enter the dimension : ";
    cin>>n;

    DiagonalMatrix m(n);
    m.createMatrix();
    //m.createDiagonalMatrix();
    m.display();

    cout << "\nElement at index [1, 1] = " << m.getMatrix(1, 1) << endl;
    m.setMatrix(1, 1, 100);

    m.display();

    return 0;


}
