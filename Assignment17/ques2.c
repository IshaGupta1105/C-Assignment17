//wap to count occurence of given character in a given string.
#include <stdio.h>
#include <string.h>
 
int main()
{
    char s[1000],c;  
    int i,count=0;
 
    printf("Enter  the string : ");
    gets(s);
    printf("Enter character to be searched: ");
    c=getchar();
    
    for(i=0;s[i];i++)  
    {
    	if(s[i]==c)
    	{
          count++;
		}
 	}
     
	printf("Character '%c' occurs %d times \n ",c,count);

 	 
     
    return 0;
}