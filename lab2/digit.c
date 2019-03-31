#include <stdio.h>

#define max 100
int digit(char str[max],int j)
{
 char f='a';
 int i;
 for(i=j;str[i]!='\0',(str[i]>='0'&& str[i]<='9' )|| str[i]=='.';i++)
 {
  switch(f)
  {
   case 'a': if(str[i]>='0'&& str[i]<='9') f='b';
	else if(str[i]=='.') f='e';
  	 break;
   case 'b': if( str[i]>='0'&& str[i]<='9')f='b';
    	else if(str[i]=='.') f='c';
   	break;
   case 'c': if(str[i]>='0'&& str[i]<='9') f='d';
    	else if(str[i]=='.') f='e';
  	 break;
   case 'd':if(str[i]>='0'&& str[i]<='9')f=='d';
		else if(str[i]=='.')f='e';
	break;
   case 'e':if(str[i]>='0'&& str[i]<='9')f='e';
		else if(str[i]=='.') f='e';
	break;

  }
 }
if(f=='d')
printf("frac ");
else
printf("not frac ");
 
 return i;
}
