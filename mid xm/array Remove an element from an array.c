#include<stdio.h>
void remover(int a[],int size,int k,int k2)
{
   int i,m;
   for(i=0;i<size;i++)
   {
         if(i==k||i==k2)
         {
               for(m=i;m<size;m++)
               {
                      a[m]=a[m+1];

               }
              a[size-1]=0;
         }
   }
   for(i=0;i<size;i++)
   {
          printf("%d,",a[i]);
   }
}
int main()
{
  int a[]={1,2,3,4,5,6};
  int k,k2;
  scanf("%d%d",&k,&k2);
  remover(a,6,k,k2);



  return 0;
}


