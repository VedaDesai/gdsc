 #include <stdio.h>
int main()
{
  int i,f=1,num;

  printf("Input the number: ");
  scanf("%d",&num);

  for(i=1;i<=num;i++)
      f=f*i;

  printf("Factorial: %d\n",f);
  return 0;
}
