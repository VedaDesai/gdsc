#include<stdio.h>  
int main()    
{    
int n,r,sum=0,f;    
printf("enter the number=");    
scanf("%d",&n);    
f=n;    
while(n>0)    
{    
r=n%10;    
sum=(sum*10)+r;    
n=n/10;    
}    
if(f==sum)    
printf("palindrome number ");    
else    
printf("not palindrome");   
return 0;  
}   