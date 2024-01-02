#include<stdio.h>
int panlin(int sum,int temp)
{
   int r;
   if(temp==0)
   {
      return sum;
   }
   else
   {
      r=temp%10;
      sum=r+(sum*10);//121
      temp=temp/10;//0
      return panlin(sum,temp);
   }
}
int main()
{
  int n;
  scanf("%d",&n);
  int re=panlin(0,n);//121

if(re==n)
{
   printf("Palindrome");

}
else{
          printf("No Palindrome");

}
  return 0;
}

