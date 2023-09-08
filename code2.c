#include <stdio.h>

int main()
{
    int previous=0;
    int current=1;
    int sum;
    printf("iteration:%d\n",current);
     for(int i=1;i<=10;i++)
     {
         sum=previous+current;
         printf("iteration:%d\n",sum);
         previous=current;
         current=sum;
     }

    return 0;
}
