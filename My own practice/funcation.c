#include<stdio.h>
int fact(int n)//1
{
       if(n==1)
       {
         return 1;
       }
       else
       {
            return n*fact(n-1);//4*6=24
       }
}
int main()
{
  int n;//4
  scanf("%d",&n);
  fact(n);//4


  return 0;
}

