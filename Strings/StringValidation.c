#include<stdio.h>
#include<stdlib.h>


/* Shamima Rayhana Rumi
   Date:31-03-2022
   Language: C
   Content: String Validation
*/


int Validation(char ch[])
{
    int word=0;
    int i;
    for(i=0;ch[i]!='\0';i++)
    {
        if(!(ch[i]>=65 && ch[i]<=90) && !(ch[i]>=97 && ch[i]<=122) && !(ch[i]>=48 && ch[i]<=58))
        {
            return 0;
        }
    }

    return 1;

}

int main()
{
    char s[]="HowAreYou123";
    char *p="gfsd34j*";

    if(Validation(s))
        printf("%s  is a valid string.\n",s);
    else
        printf("%s  is an invalid string.\n",s);


    if(Validation(p))
        printf("%s  is a valid string.\n",p);
    else
        printf("%s  is an invalid string.\n",p);

     return 0;

}

