#include<stdio.h>
#include<stdlib.h>

/*
Author: Shamima Rayhana Rumi
Date: 24-05-2022
Content: Tri diagonal matrix in c
*/

struct Matrix
{
    int *A;
    int n;
};

void Set(struct Matrix *m, int i,int j,int value)
{
    if(i-j==1)
    {
       m->A[i-2]=value;
    }
    else if(i-j==0)
    {
        m->A[m->n-1+i-1]=value;
    }
    else if(i-j==-1)
    {
        m->A[2*m->n-1+i-1]=value;
    }
}

int Get(struct Matrix m, int i,int j)
{
    if(i-j==1)
    {
        return m.A[i-2];
    }
    else if(i-j==0)
    {
        return m.A[m.n-1+i-1];
    }
    else if(i-j==-1)
    {
        return m.A[2*m.n-1+i-1];
    }
    else
    {
        return 0;
    }
}

void display(struct Matrix m)
{
    int i,j;
    printf("The Tri Diagonal Matrix is: \n");
    for(i=1;i<=m.n;i++)
    {
        for(j=1;j<=m.n;j++)
        {
            printf("%d ", Get(m,i,j));
        }
        printf("\n");
    }
    printf("\n");

}

int main()
{
    struct Matrix m;
    printf("Enter matrix dimension: \n");
    scanf("%d",&m.n);

    int size=3*m.n-2;
    m.A=(int*)malloc(sizeof(int)*size);

    int value;
    printf("Enter all values: \n");
    int i,j;
    for(i=1;i<=m.n;i++)
    {
        for(j=1;j<=m.n;j++)
        {
            scanf("%d",&value);
            Set(&m,i,j,value);
        }
    }

    display(m);
    return 0;

}


