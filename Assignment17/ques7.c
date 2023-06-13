//WAP to count total number of alphabets,digits,and special character in a string.
#include <stdio.h>
 
int main()
{
  	char str[100];
  	int i, alphabets, digits, special;
  	i = alphabets = digits = special = 0;
 
  	printf("Please Enter any String:\n");
  	gets(str);
  	
  	while (str[i] != '\0')
  	{
  		if( (str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z') )
  		{
  			alphabets++;  	
 		}
  		else if (str[i] >= '0' && str[i] <= '9')
  		{
  			digits++;  	
  		}    
  		else
    		special++;
    	i++;
	}
    printf("Number of Alphabets in this String = %d", alphabets);  
	printf("\nNumber of Digits in this String = %d", digits);  
	printf("\nNumber of Special Characters in this String = %d", special);  	
  
  	return 0;
}
