#include<stdio.h>
#include<stdlib.h>


/* Shamima Rayhana Rumi
   Date:29-03-2022
   Language: C
   Content: Number of vowel , consonants and words
*/

void VowelConsonent(char ch[])
{
    int vowel=0;
    int cons=0;
    int i;
    for(i=0;ch[i]!='\0';i++)
    {
        if(ch[i]=='a' || ch[i]=='e' || ch[i]=='i' || ch[i]=='o' || ch[i]=='u' ||
           ch[i]=='A' || ch[i]=='E' || ch[i]=='I' || ch[i]=='O' || ch[i]=='U')
        {
            vowel++;
        }
        else if((ch[i]>=65 && ch[i]<=90) || (ch[i]>=97 && ch[i]<=122))
        {
            cons++;
        }
    }

    printf("Number of vowels is : %d\n", vowel);
    printf("Number of consonants is : %d\n", cons);

}

void WordNumber(char ch[])
{
    int word=0;
    int i;
    for(i=0;ch[i]!='\0';i++)
    {
        if(ch[i]==' ' && ch[i-1]!=' ')
            word++;
    }
    printf("Number of word is : %d\n", word+1);

}

int main()
{
    char s[]="How Are  You?";
     VowelConsonent(s);
     WordNumber(s);

     return 0;

}
