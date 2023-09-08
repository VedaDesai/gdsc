#include <stdio.h>

int main()
{
    int a,b,c,d;
    printf("enter 1st and 2nd No.: ");
    scanf("%d %d",&a,&b);
    c=a*b;
    d=a+b;
    if(c<=1000)
    {
        printf("product:%d",c);
        }
else
   {
       printf("sum:%d",d);
   }
    return 0;
}