#include<stdio.h>
int power(int m,int n)
{
       if(n==0)
       {
              return 1;
       }
       else
       {
              return m*power(m,n-1);
       }
}
int main()
{
  int n,m;
  scanf("%d %d",&m,&n);
  int result=power(m,n);
  printf("%d",result);


  return 0;
}


