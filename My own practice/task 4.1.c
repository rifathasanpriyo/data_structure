#include<stdio.h>
void rotateRight(int source[],int k,int size)
{
       int j,m;
       for(j=0;j<k;j++)
       {
              int first=size-1,second=first-1;
              int temp=source[size-1];

               for(m=0;m<size;m++)
               {
                     source[first]=source[second];
                     first=(first-1)%size;
                     second=(first-1)%size;
               }
               source[0]=temp;
       }
       for(m=0;m<size;m++)
       {
              printf("%d,",source[m]);
       }
}
int main()
{
     int size,k,i;
    printf("Enter Array Size= ");
    scanf("%d",&size);
    int source[size];
    printf("\nEnter Array Elements= ");
    for(i=0; i<size; i++)
    {
        scanf("%d",&source[i]);
    }
    printf("\nEnter 'k' positions= ");
    scanf("%d",&k);
    rotateRight(source,k,size);

  return 0;
}


