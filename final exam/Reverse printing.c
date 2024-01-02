#include<stdio.h>
void reverse(int a[],int low,int high)
{
       if(low<high)
       {
              int temp=a[low];
              a[low]=a[high];
              a[high]=temp;
              reverse(a,low+1,high-1);
       }
}
int main()
{
  int a[]={1,2,3,4,5,6,7,8};
  reverse(a,0,8-1);
  for(int i=0;i<8;i++)
  {
         printf("%d\t",a[i]);
  }

  return 0;
}

