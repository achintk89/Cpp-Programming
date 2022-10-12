///if first letter of string is in lowercase make the
//whole string lowercase and vice versa
#include <iostream>
using namespace std;

int main()
{
	string str;
    getline(cin,str);
	
	for(int i=0;str[i]!='\0';i++) //change string from  lower to upper and vice versa
	{
    	if (str[0]>=65 && str[0]<=90 )                  
			str[i] = toupper(str[i]);       
		else if (str[0]>=97 && str[0]<=122 )    
			str[i] = tolower(str[i]);       
	}

    /*for(int i=0;str[i]!='\0';i++)  //change character from  lower to upper and vice versa
	{
    	if (str[i]>=65 && str[i]<=90 )                  
			str[i] = toupper(str[i]);       
		else if (str[i]>=97 && str[i]<=122 )    
			str[i] = tolower(str[i]);       
	} */   
	cout<< str;
return 0;
}