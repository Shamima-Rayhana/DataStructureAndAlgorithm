#include<stdio.h>
#include<stdlib.h>


/* Shamima Rayhana Rumi
   Date:08-04-2022
   Language: C
   Content: Finding duplicate using Bitwise operation
*/


void Find_Duplicate1(char A[])
{
    int i=0,j,cnt=1,len=0;

    for(i=0;A[i]!='\0';i++)
    {
        len++;
    }
    len--;
    for(i=0; i<len; i++)
    {
        for(j=i+1;A[j]!='\0'; j++)
        {
            if(A[j]!=-1 && A[i]==A[j])
            {
                cnt++;
                A[j]=-1;
            }
        }
        if(cnt>1)
        {
            printf("%c is duplicated %d times.\n", A[i], cnt);
            cnt=1;
        }
    }
    printf("\n\n");
}

void Find_Duplicate_Hashing(char A[])
{
    int H[26]={0};
    int i=0;

    for(i=0;A[i]!='\0';i++)
    {
        H[A[i]-'a']++;
    }

    for(i=0;i<26;i++)
    {
        if(H[i]>1)
        {
            printf("%c is duplicated %d times.\n", i+'a', H[i]);
        }
    }
    printf("\n\n");
}


void Duplicate_Bitwise(char A[])
{
    int H=0;
    int x=0;
    int i;

    for(i=0;A[i]!='\0';i++)
    {
        x=1;
        x = x<<(A[i]-'a');
        if((H & x)>0)
        {
            printf("%c is duplicated\n", A[i]);
        }
        else
        {
            H = (H|x);
        }
    }
    printf("\n\n");
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
    char s[]="finding";
    char h[]="Shamima";

    //Find_Duplicate1(s);
    //Find_Duplicate_Hashing(h);
    display_string(s);
    Duplicate_Bitwise(s);
    display_string(h);
    Duplicate_Bitwise(h);


    return 0;

}






