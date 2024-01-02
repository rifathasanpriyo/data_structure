#include<stdio.h>
void Remove(int source[],int size,int element)
{
       int m,n;
       for(m=0;m<size;m++)
       {
              if(m==element)
              {
                     for(n=m;n<size-1;n++)
                     {
                            source[n]=source[n+1];

                     }
                     source[size-1]=0;
              }
       }
       for(m=0;m<size;m++)
       {
              printf("%d,",source[m]);
       }
}
int main()
{
    int size,element,i;
    printf("Enter Array Size= ");
    scanf("%d",&size);
    int source[size];
    printf("\nEnter Array Elements= ");
    for(i=0; i<size; i++)
    {
        scanf("%d",&source[i]);
    }
    printf("\nEnter IDX for Remove= ");
    scanf("%d",&element);
    Remove(source,size,element);

}
