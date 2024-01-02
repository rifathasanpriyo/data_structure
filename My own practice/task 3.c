#include<stdio.h>
void rotateLeft(int source[],int k,int size)
{
       int j,m;
       for(j=0;j<k;j++)
       {
              int temp=source[0];
               for(m=0;m<size-1;m++)
               {
                     source[m]=source[m+1];
               }
               source[size-1]=temp;
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
    rotateLeft(source,k,size);

  return 0;
}

