#include<stdio.h>
#include<stdlib.h>


/* Shamima Rayhana Rumi
   Date:04-04-2022
   Language: C
   Content: Finding duplicate elements in String
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





int main()
{
    char s[]="madam";
    char h[]="Rotationtt";

    Find_Duplicate1(s);
    Find_Duplicate_Hashing(h);


    return 0;

}





