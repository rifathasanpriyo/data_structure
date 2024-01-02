#include<stdio.h>
void search(int a[],int size,int valu)
{
       int i;
       for(i=0;i<size;i++)
       {
              if(a[i]==valu)
              {
                   printf("index %d",i) ;
              }
       }
}
int main()
{
  int a[]={3,4,5,6,7,8,9};
  search(a,7,8);



  return 0;
}

