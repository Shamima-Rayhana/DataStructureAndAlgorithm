#include<stdio.h>
#include<stdlib.h>


/* Shamima Rayhana Rumi
   Date:01-04-2022
   Language: C
   Content: Reversing of String
*/


void StringComparision(char A[], char B[])
{

    int i,j;
    for(i=0,j=0;A[i]!='\0'&&B[j]!='\0';i++,j++)
    {
        if(A[i]!=B[j])
        {
            //printf("Rumi\n");
            break;
        }
    }
    if(A[i]==B[j])
        printf("Equal\n");
    else if(A[i]<B[j])
        printf("Smaller\n");
    else
        printf("Greater\n");

}

int main()
{
    char s[]="Rotating";
    char h[]="Rotation";

    StringComparision(s,h);


     return 0;

}



