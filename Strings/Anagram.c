#include<stdio.h>
#include<stdlib.h>


/* Shamima Rayhana Rumi
   Date:05-04-2022
   Language: C
   Content: Check Anagram string
*/



void Anagram_Hashing(char A[], char B[])
{
    int H[26]= {0};
    int i;

    for(i=0; A[i]!='\0'; i++)
    {
        H[A[i]-'a']++;
    }

    for(i=0; B[i]!='\0'; i++)
    {
        H[B[i]-'a']--;

    }

    for(i=0; i<26; i++)
    {
        if(H[i]<0)
        {
            printf("Both strings are not Anagram.\n");
            return;

        }

    }
    printf("Both strings are Anagram.\n");
    printf("\n\n");
}





int main()
{
    char s[]="medical";
    char h[]="decimal";

    char p[]="medicel";
    char q[]="decimal";

    Anagram_Hashing(s,h);
    Anagram_Hashing(p,q);


    return 0;

}






