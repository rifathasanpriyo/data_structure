#include<stdio.h>
int factor(int n)
{
       if(n==1)
       {
              return 1;
       }
       else
       {
              return factor(n-1)*n;
       }
}
int main()
{
  int n;
  scanf("%d",&n);
  int result=factor(n);
  printf("%d",result);


  return 0;
}

