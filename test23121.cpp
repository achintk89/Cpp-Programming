#include<iostream>
using namespace std;

int main()
{
   const char *s="";
   char str[]="1234";
   s=str;
   while(*s)
   printf("%c", *s++);

   return 0;
} 