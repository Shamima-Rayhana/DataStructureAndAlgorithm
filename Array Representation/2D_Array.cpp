#include<bits/stdc++.h>

using namespace std;

void arrayInStack()
{
    int A[3][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12}};
    int i,j;
    cout<<"Array Stored in Stack "<<endl;
    for(i=0;i<3;i++)
    {
        for(j=0;j<4;j++)
        {

            cout<<"A["<<i<<"]["<<j<<"] = "<<A[i][j]<<endl;
        }
    }
    cout<<endl<<endl;
}

void arrayInStackAndHeap()
{
    int *B[3];
    int i,j;
    B[0]=(int*)malloc(4*sizeof(int));//B[0]=new int[4];
    B[1]=(int*)malloc(4*sizeof(int));
    B[2]=(int*)malloc(4*sizeof(int));

    cout<<"Assign 12 value for Array B :"<<endl;

    for(i=0;i<3;i++)
    {
        for(j=0;j<4;j++)
        {
            cin>>B[i][j];
        }
    }
    cout<<endl;
    cout<<"Array B Stored in Stack and Heap "<<endl;

    for(i=0;i<3;i++)
    {
        for(j=0;j<4;j++)
        {
            cout<<"B["<<i<<"]["<<j<<"] = "<<B[i][j]<<endl;
        }
    }
     cout<<endl<<endl;
}

void arrayInHeap()
{
    int **C;
    int i,j;

    C=(int**)malloc(3*sizeof(int*));//C=new int*[3];
    C[0]=(int*)malloc(4*sizeof(int));
    C[1]=(int*)malloc(4*sizeof(int));
    C[2]=(int*)malloc(4*sizeof(int));

    cout<<"Assign 12 value for Array C :"<<endl;

    for(i=0;i<3;i++)
    {
        for(j=0;j<4;j++)
        {
            cin>>C[i][j];
        }
    }
    cout<<endl;
    cout<<"Array C Stored in Heap "<<endl;

    for(i=0;i<3;i++)
    {
        for(j=0;j<4;j++)
        {
            cout<<"C["<<i<<"]["<<j<<"] = "<<C[i][j]<<endl;
        }
    }
     cout<<endl<<endl;
}

int main()
{
    arrayInStack();
    arrayInStackAndHeap();
    arrayInHeap();

    return 0;
}

