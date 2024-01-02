#include<stdio.h>
int print(int a[],int size)
{
       if(size==-1)
       {
              return;
       }

          print(a,size-1);
       printf("%d",a[size]);

}
int main()
{
  int a[]={1,2,4,5,6,7};
  print(a,5);



  return 0;
}

