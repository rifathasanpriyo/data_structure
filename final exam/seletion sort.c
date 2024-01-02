#include<stdio.h>
void seletion(int a[],int size)
{
       int i,min,temp,j;
       if(size==1)
       {
              return;
       }
       for(i=0;i<size;i++)
       {
              min=i;
              for(j=i+1;j<size;j++)
              {
                     if(a[min]>a[j])
                     {
                            min=j;
                     }
              }
              temp=a[i];
              a[i]=a[min];
              a[min]=temp;
       }
       seletion(a,size-1);
}
int main()
{
  int a[]={2,8,9,1,3,100};
  seletion(a,6);
  int i;
  for(i=0;i<6;i++)
  {
         printf("%d\t",a[i]);
  }


  return 0;
}

