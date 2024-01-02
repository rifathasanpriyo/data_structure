#include<stdio.h>
int binary_search(int left,int right,int valu,int a[])
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
       else if(valu>a[mid])
       {
             anser= binary_search(mid+1,right,valu,a);
             return anser;

       }
       else if(valu<a[mid])
       {
           anser= binary_search(left,mid-1,valu,a);
             return anser;
       }


}

int main()
{
  int a[]={3,4,5,6,7,8,9};
  int size=sizeof(a)/sizeof(a[0]);
  int left=size-size;
  int right=size-1;
  int valu=8;
 int anser= binary_search(left,right,valu,a);
  printf("%d",anser);

  return 0;
}


