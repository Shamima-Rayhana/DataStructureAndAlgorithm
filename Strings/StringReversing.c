#include<stdio.h>
#include<stdlib.h>


/* Shamima Rayhana Rumi
   Date:01-04-2022
   Language: C
   Content: Reversing of String
*/


void Reverse1( char A[])
{
    char B[5];
    int i,j;
    for(i=0;A[i]!='\0';i++)
    {

    }
    i=i-1;
    for(j=0;i>=0;i--,j++)
    {
        B[j]=A[i];

    }
    printf("The reverse string is %s\n",B);

}

void Reverse2( char ch[])
{
    int i,j,temp;
    for(i=0;ch[i]!='\0';i++)
    {

    }
    i=i-1;
    for(j=0;i>j;j++,i--)
    {
        temp=ch[i];
        ch[i]=ch[j];
        ch[j]=temp;

    }
    printf("Reverse string : %s\n", ch);

}

int main()
{
    char s[]="Rumi";
    char h[]="Shamima";
    Reverse1(s);
    Reverse2(h);

     return 0;

}


