#include<stdio.h>
void insertion(int a[],int size)
{
       int i,item,j;
       for(i=1;i<size;i++)
       {
              item=a[i];
              j=i-1;
              while(j>=0&&item<a[j])
              {
                     a[j+1]=a[j];
                     j--;
              }
              a[j+1]=item;
       }
}
int main()
{
  int a[]={8,1,9,2,3};
  insertion(a,5);
  for(int i=0;i<5;i++)
  {
         printf("%d\t",a[i]);
  }


  return 0;
}

