#include<stdio.h>
#include<stdlib.h>


/* Shamima Rayhana Rumi
   Date:29-03-2022
   Language: C
   Content: ASCII values
*/

void display(char s[])
{
    int i = 0;
    while(s[i]!='\0')
    {
        printf("%c", s[i]);
        i++;

    }

    printf("\n\n");
}

int main()
{
    char name[20]= {'P','a', 'r', 'e', 'n', 't', 's', '\0' };
    char name2[]= {'F','a', 't', 'h', 'e', 'r', '\0' };
    char name3[]="Shamima";
    char *name4="Rayhana";
    char name5[20];
    char n[10];

    display(name);
    display(name2);
    display(name3);
    display(name4);


    printf("Enter multiple word string : \n");
    gets(name5);
    printf("The sentence is : %s\n\n",name5);



    printf("Enter single word string : \n");
    scanf("%s", n);
    printf("The word is : %s\n", n);



    return 0;
}

