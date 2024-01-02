#include<stdio.h>
void sorting(int a[],int size)
{
    if(size<=1)
      {
             return;
      }
      sorting(a,size-1);
      int last=a[size-1],j=size-2;
      while(j>=0 && a[j]>last)
      {
             a[j+1]=a[j];
             j--;
      }
      a[j+1]=last;

}
int main()
{
  int a[]={6,8,3,1,4,2};
  sorting(a,6);
      for(int i=0;i<6;i++)
      {
             printf("%d\t",a[i]);
      }

  return 0;
}

