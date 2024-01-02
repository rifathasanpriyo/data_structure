#include<stdio.h>
void shiftroteLeft(int a[],int size,int k)
{
   int i,m;
   for(i=0;i<k;i++)
   {
          int first=0,second=first+1;
          int temp=a[0];
        for(m=0;m<size;m++)
        {
            a[first]=a[second];
            first=(first+1)%size;
            second=(first+1)%size;
        }
          a[size-1]=temp;
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
  shiftroteLeft(a,6,k);



  return 0;
}

