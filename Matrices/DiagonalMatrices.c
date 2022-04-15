#include<stdio.h>
#include<stdlib.h>


/* Shamima Rayhana Rumi
   Date:15-04-2022
   Language: C
   Content: Diagonal matrix
*/

struct matrix{
    int A[10];
    int n;

};

void set(struct matrix *m, int i,int j,int value)
{
    if(i==j)
    {
        m->A[i-1]=value;
    }
}

int get(struct matrix m, int i,int j)
{
    if(i==j)
    {
        return m.A[i-1];
    }
    else
    {
        return 0;
    }
}

void display(struct matrix m)
{
    int i,j;
    for(i=0;i<m.n;i++)
    {
        for(j=0;j<m.n;j++)
        {
            if(i==j)
                printf("%d ",m.A[i]);
            else
                printf("0 ");
        }
        printf("\n");
    }
}



int main()
{
    struct matrix m;
    m.n=3;
    set(&m,1,1,5);
    set(&m,2,2,7);
    set(&m,3,3,9);

    get(m,3,3);

    display(m);


    return 0;

}







