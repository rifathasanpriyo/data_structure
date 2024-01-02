#include<stdio.h>
void print(int a[],int size);
int main()
{
  int a[]={100,90,80,70,60,50,40,30,20,10},i,j,item;
 for(i=1;i<10;i++)
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
    print(a,10);
}
void print(int a[],int size)
{
       if(size==0)
       {
              return;
       }

          print(a,size-1);
       printf("%d\t",a[size-1]);

}
