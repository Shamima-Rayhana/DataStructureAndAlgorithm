#include<bits/stdc++.h>
/*Auther: Shamima Rayhana Rumi
  Date: 13-06-2022
  content: Menu driven for diagonal matrix using function*/

using namespace std;

void MatrixCreate(int A[],int n)
{
    cout<<"Enter all the elements row by row"<<endl;
    for(int i=1; i<=n; i++)
        cin>>A[i-1];

}
int GetValue(int X[],int i,int j)
{
    if(i==j)
        return X[i-1];
    else
        return 0;

}
void SetValue(int A[],int i,int j,int value)
{
    if(i==j)
        A[i-1]=value;

}
void Display(int A[],int n)
{
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=n; j++)
        {
            if(i==j)
                cout<<A[i-1]<<" ";
            else
                cout<<"0 ";
        }
        cout<<endl;
    }

}

int main()
{
    int *A,n,ch,i,j,x;
    cout<<"Enter the dimension"<<endl;
    cin>>n;
    A=new int[n];
    do
    {
        cout<<"Enter your choice"<<endl;
        cout<<"1. Create matrix\n 2. get Elements\n 3. Set elements\n 4. Display matrix\n"<<endl;
        cin>>ch;
        switch(ch)
        {
        case 1:
            MatrixCreate(A,n);
            break;
        case 2:
            cout<<"Enter indices"<<endl;
            cin>>i>>j;
            cout<<GetValue(A,i,j)<<endl;
            break;
        case 3:
            cout<<"Enter the row ,column and value"<<endl;
            cin>>i>>j>>x;
            SetValue(A,i,j,x);
            break;
        case 4:
            Display(A,n);
            break;


        }
    }
    while(ch>=1 && ch<=4);
    return 0;


}

