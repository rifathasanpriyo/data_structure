#include<stdio.h>
#define size 3
int stack[size];
int total=-1;
void push(int x)
{
       if(total<size)
       {
             total=total+1;
             stack[total] =x;
       }
       else{

              printf("\nNO SPACE");
       }


}
int pop()
{
if(total>=0)
{
       int valu=stack[total];
       total=total-1;
       return valu;
}
}
int peak()
{
       int valu;
  if(total>=0)
  {
         valu=stack[total];
         return valu;
  }
}
int main()
{
  push(10);
  push(20);
  push(30);
  push(40);
  printf("\nPop item %d",pop());
  push(50);
  printf("\nTop iteam %d",peak());

  return 0;
}

