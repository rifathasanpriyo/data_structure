#include<stdio.h>
void shiftRight(int a[],int size,int k)
{
    int i;
  for(i=size-1;i>=0;i--)
  {
         if(k<=i)
         a[i]=a[i-k];
         else
              a[i]=0;
  }
  for(i=0;i<size;i++)
  {
         printf("%d,",a[i]);
  }
}
int main()
{
  int a[]={1,2,3,4,5,6};
  int k;
  scanf("%d",&k);
  shiftRight(a,6,k);



  return 0;
}


