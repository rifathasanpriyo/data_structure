#include<stdio.h>
void rotateLeft(int source[],int k,int size)
{
       int j,m;
       for(j=0;j<k;j++)//2
       {
              int first=0,second=first+1;
              int temp=source[0];
               for(m=0;m<size;m++)//  3 4 5 6 1 2
               {
                     source[first]=source[second];
                     first=(first+1)%size;
                     second=(first+1)%size;
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


