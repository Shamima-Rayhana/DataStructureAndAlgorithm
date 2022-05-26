#include<stdio.h>
#include<stdlib.h>

/*
Author: Shamima Rayhana Rumi
Date: 26-05-2022
Content: Toeplitz matrix in c
*/

struct Matrix
{
    int *A;
    int n;
};

void Set(struct Matrix *m, int i,int j,int value)
{
    if(i<=j)
    {
        m->A[j-i]=value;
    }
    else if(i>j)
    {
        m->A[m->n-1+i-j]=value;
    }
}

int Get(struct Matrix m, int i,int j)
{
    if(i<=j)
    {
        return m.A[j-i];
    }
    else if(i>j)
    {
        return m.A[m.n-1+i-j];
    }
}

void display(struct Matrix m)
{
    int i,j;
    printf("The Toeplitz Matrix is: \n");
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

    int size=2*m.n-1;
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
