#include<stdio.h>
void RemoveAll(int source[],int size,int element)
{
       int m,n;
       for(m=0;m<size;m++)
       {

              if(source[m]==element)
              {
                     for(n=m;n<size-1;n++)
                     {
                            source[n]=source[n+1];

                     }
                     source[size-1]=0;
                     m--;
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
    printf("\nEnter occurrences for Remove= ");
    scanf("%d",&element);
    RemoveAll(source,size,element);

}
