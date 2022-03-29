#include<stdio.h>
#include<stdlib.h>


/* Shamima Rayhana Rumi
   Date:29-03-2022
   Language: C
   Content: ASCII values
*/

int main()
{
    printf("\tASCII values and Characters: \n\n\n");

    for(int i=0;i<128;i++)
    {
        printf("\t\t %d \t->\t %c \n", i, i);
    }

    return 0;
}
