#include<stdio.h>
#include<stdlib.h>


/* Shamima Rayhana Rumi
   Date:20-05-2022
   Language: C
   Content: Upper triangular matrix using column major formula
*/

struct matrix{
    int *A;
    int n;

};

void set(struct matrix *m, int i,int j,int value)
{
    if(i<=j)
    {
        m->A[j*(j-1)/2+i-1]=value; //column major formula
    }

}

int get(struct matrix m, int i,int j)
{
    if(i<=j)
    {
        return m.A[j*(j-1)/2+i-1];
    }
    else
    {
        return 0;
    }

}

void display(struct matrix m)
{
    int i,j;
    for(i=1;i<=m.n;i++)
    {
        for(j=1;j<=m.n;j++)
        {
            if(i<=j)
                printf("%d ",m.A[j*(j-1)/2+i-1]);
            else
                printf("0 ");
        }
        printf("\n");
    }
}



int main()
{
    struct matrix m;
    int i,j,value;
    printf("Enter the dimension of the matrix: \n");
    scanf("%d",&m.n);
    m.A=(int *)malloc(m.n*(m.n+1)/2*sizeof(int));

    printf("Enter all elements of the matrix: \n");
    for(i=1;i<=m.n;i++)
    {
        for(j=1;j<=m.n;j++)
        {
            scanf("%d",&value);
            set(&m,i,j,value);
        }
    }
    printf("\n");

    printf("The Upper triangular matrix is: \n");
    display(m);


    return 0;

}
