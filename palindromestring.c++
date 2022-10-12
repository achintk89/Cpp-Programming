#include<iostream>
#include <stdio.h>
#include <string.h>
using namespace std;
 
 
int checkpalindrome(char *s)
{
    int n=strlen(s);
    char s2[n];
    strcpy(s2,s);
    strrev(s2);
    if(!strcmp(s,s2))
 	    return 1;
    else
        return 0;
 	 
 	
}
int main()
{
    char s[1000];  
   
    printf("Enter  the string: ");
    gets(s);
    
 
    if(checkpalindrome(s))
 	    printf("string is palindrome");
    else
        printf("string is not palindrome");
    return 0;
 
 }