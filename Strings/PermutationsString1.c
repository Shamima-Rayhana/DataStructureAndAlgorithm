#include<stdio.h>
#include<stdlib.h>


/* Shamima Rayhana Rumi
   Date:014-04-2022
   Language: C
   Content: Finding permutations of string
*/


void Permutations(char s[], int k)
{
    static int A[]={0};
    static char R[200];
    int i;

    if(s[k]=='\0')
    {
        R[k]='\0';
        printf(R);
        printf("\n");

    }
    else
    {
        for(i=0; s[i]!='\0'; i++)
        {
            if(A[i]==0)
            {
                R[k]=s[i];
                A[i]=1;
                Permutations(s, k+1);
                A[i]=0;
            }
        }
    }
}


void display_string(char A[])
{
    int i = 0;
    printf("The string is : \n");

    while(A[i]!='\0')
        printf("%c", A[i++]);
    printf("\n\n");
}





int main()
{
    char s[]="ABC";
    char h[]="Shamima";

    //Find_Duplicate1(s);
    //Find_Duplicate_Hashing(h);
    display_string(s);
    Permutations(s,0);
    display_string(h);
    Permutations(h,0);


    return 0;

}







