#include<stdio.h>
int main()
{
  int a[]={7,3,6,4,1,8};
  int min,i,j,temp;
  for(i=0;i<6;i++)
  {
      min=i;
      for(j=i+1;j<6;j++)
      {
             if(a[j]<a[min])
             {
                    min=j;
             }
      }
      temp=a[i];
      a[i]=a[min];
      a[min]=temp;
  }

  for(i=0;i<6;i++)
  {
         printf("%d\t",a[i]);
  }

  return 0;
}

