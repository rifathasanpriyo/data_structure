#include<stdio.h>
int sum(int n)//1
{
     if(n==1)
     {
            return 1;
     }
       else {

              return n+sum(n-1);//3 2 =4
       }


}
int main()
{
  int n;
  scanf("%d",&n);
  printf("Result = %d",sum(n));



  return 0;
}
