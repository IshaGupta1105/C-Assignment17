//Wap to copy one string to another string.
#include<stdio.h>

int main()
{
    char a[10]="isha",b[10];
    int i=0;
    while(a[i]!='\0')
    {
        b[i]=a[i];
        i++;
    }
    b[i]='\0';
    printf("\nCopied string is %s\n",b);
    return 0;
}