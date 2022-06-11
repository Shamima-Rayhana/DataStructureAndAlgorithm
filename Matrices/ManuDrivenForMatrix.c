#include<stdio.h>
#include<stdlib.h>

int main()
{
    int *A,n,ch,x;
    printf("Enter the dimension\n");
    scanf("%d",&n);
    A=(int*)malloc(n*sizeof(int));
    int i,j;

    do
    {
        printf("Enter your choice \n");
        printf(" 1. Create matrix\n 2. get Elements\n 3. Set elements\n 4. Display matrix\n");
        scanf("%d",&ch);
        switch(ch)
        {
        case 1:
            printf("Enter all the elements row by row\n");
            for(i=1; i<=n; i++)
                scanf("%d",&A[i-1]);
            break;
        case 2:
            printf("Enter indices\n");
            scanf("%d%d",&i,&j);
            if(i==j)printf("%d\n",A[i-1]);
            else printf("0\n");
            break;
        case 3:
            printf("Enter the row ,column and value\n");
            scanf("%d%d%d",&i,&j,&x);
            if(i==j)A[i-1]=x;
            break;
        case 4:
            for(i=1; i<=n; i++)
            {
                for(j=1; j<=n; j++)
                {
                    if(i==j)printf("%d ",A[i-1]);
                    else printf("0 ");
                }
                printf("\n");
            }
            break;


        }
    }
    while(ch>=1 && ch<=4);
    return 0;
}

