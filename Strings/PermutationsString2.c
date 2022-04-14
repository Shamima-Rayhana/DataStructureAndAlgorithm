#include<stdio.h>
#include<stdlib.h>


/* Shamima Rayhana Rumi
   Date:014-04-2022
   Language: C
   Content: Finding permutations of string
*/

void swap(char *p, char *q)
{
    char temp;
    temp=*p;
    *p=*q;
    *q=temp;
}


void Permutations(char s[], int low, int high)
{
    int i;

    if(low==high)
    {
        printf(s);
        printf("\n");

    }
    else
    {
        for(i=low; i<=high; i++)
        {
            swap(&s[low], &s[i]);
            Permutations(s, low+1, high);
            swap(&s[low], &s[i]);
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


    display_string(s);
    Permutations(s,0,2);
    display_string(h);
    Permutations(h,0,6);


    return 0;

}








