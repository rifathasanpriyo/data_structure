#include<stdio.h>
void shiftLeft(int a[],int size,int k)
{
    int i;
  for(i=0;i<size;i++)
  {
         if(i<size-k)
         a[i]=a[i+k];
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
  int a[]={1,2,3,4,5,6};//  3 4 5 6 0 0
  int k;
  scanf("%d",&k);
  shiftLeft(a,6,k);



  return 0;
}

