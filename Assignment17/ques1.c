//wap to calculate the length of the string.
#include<stdio.h>

int main()
{
    char name[]="Ishaa";
    int i,length=0;
    for(i=0;name[i]!=0;i++)
    {
        length++;
    }
    printf("\n Length of string is %d",length);
    return 0;
}