
#include<stdio.h>
#define max 100
int operator(char str[max],int j)
{
 char f='A';
 int i;
 for(i=j;str[i]!='\0',str[i]=='+'||str[i]=='=';i++)
 {
  switch(f)
  {
   case 'A': if(str[i]=='+')f='B';
		break;
   case 'B': if(str[i]=='+') f='C';
	else if(str[i]=='=')f='D';
	break;
default:
	break;
   }
}
if(f=='B')
printf("<ADD> ");
else if(f=='C')
printf("<INCR> ");
else if(f=='D')
printf("<ADD-ASN> ");
else
printf("not a valid operator ");
return i;
}
