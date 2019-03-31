#include<stdio.h>
#include<string.h>
#include"digit.c"
#include"orerator.c"
int main()
{
int i,j=0;
char str[100],ch;
printf("Enter the string to be test :");
scanf("%s" ,str);
for(i=j;str[j]!='\0';i++)
if(str[i]>='0'&& str[i]<='9') 
{
j=digit(str,j);}
else if(str[j]=='+'|| str[j]== '=')
{
j=operator(str,j);
}
else
{
printf("not a valid operator chose only '+' ,'++' or '+=' ");
break;}

printf("\n");
return 0;
}
