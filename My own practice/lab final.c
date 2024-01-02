#include<stdio.h>
int binary(int left,int right,int a[],int valu)
{
   int mid,anser;
   mid=(left+right)/2;
   if(left>right)
   {
          return -1;
   }
   if(a[mid]==valu)
   {
          return mid;
   }
   else if(a[mid]>valu)
   {
         anser=binary(left,mid-1,a,valu);
   }
   else if(a[mid]<valu)
   {
       anser=binary(mid+1,right,a,valu);
   }

}
int main()
{
  int a[]={9,3,2,6,1,7},item,i,j,anser;
  //insertion sort
  for(i=1;i<6;i++)
  {
     item=a[i];
     j=i-1;
    while(j>=0&&a[j]>item)
    {
      a[j+1] =a[j];
      j--;
    }
    a[j+1]=item;
  }
int left=0,right=6-1;
anser=binary(left,right,a,9);
printf("%d",anser);

  return 0;
}
