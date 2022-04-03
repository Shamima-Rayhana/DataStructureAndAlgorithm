#include<stdio.h>
#include<stdlib.h>


/* Shamima Rayhana Rumi
   Date:03-04-2022
   Language: C
   Content: Palindrome String
*/



void StringComparision(char A[], char B[])
{

    int i,j,flag=0;
    for(i=0,j=0; A[i]!='\0'&&B[j]!='\0'; i++,j++)
    {
        if(A[i]!=B[j])
        {
            printf("This string is not palindrome.\n");
            flag=1;
            break;
        }

    }
    if(flag==0)
        printf("This string is palindrome.\n");

}


void Palindrome_Check1( char A[])
{
    char B[5];
    int i,j;
    for(i=0; A[i]!='\0'; i++)
    {

    }
    i=i-1;
    for(j=0; i>=0; i--,j++)
    {
        B[j]=A[i];

    }

    StringComparision(A,B);

}

void Palindrome_Check2( char ch[])
{
    int i,j,temp=0;
    for(i=0; ch[i]!='\0'; i++)
    {

    }
    i=i-1;
    for(j=0; i>j; j++,i--)
    {
        if(ch[i]!=ch[j])
        {
            printf("Given string is not palindrome.\n");
            temp=1;
            break;
        }

    }
    if(temp==0)
    printf("Given string is palindrome.\n");

}




int main()
{
    char s[]="madam";
    char h[]="Rotation";

    Palindrome_Check1(s);

    Palindrome_Check2(h);


    return 0;

}




