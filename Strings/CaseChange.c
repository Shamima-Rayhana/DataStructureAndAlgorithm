#include<stdio.h>
#include<stdlib.h>


/* Shamima Rayhana Rumi
   Date:31-03-2022
   Language: C
   Content: Length of string
*/

void ChangeCase(char s[])
{
    int i;
    for(i=0;s[i]!='\0';i++)
    {
        if(s[i]>=65 && s[i]<=90)
        {
            s[i] += 32;
        }
        else if(s[i]>=122 && s[i]<=97)
        {
            s[i] -= 32;
        }
    }
    printf("Now the string is %s\n",s);
    printf("RUMI\n");
}

int main()
{
    char S[]="WELCOME";

    ChangeCase(S);

    return 0;
}



