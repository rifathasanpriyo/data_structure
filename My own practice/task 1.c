#include<stdio.h>
void shiftLeft(int source[],int k,int size)
{
    int j;
    for(j=0; j<size; j++) //4 5 6 0 0 0
    {
        if(j<size-k)
        {
            source[j]=source[j+k];

        }
        else
        {
        source[j]=0;
        }

    }
    printf("\nFinal output= ");
    for(j=0;j<size;j++)
    {
           printf("%d,",source[j]);
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
    shiftLeft(source,k,size);


    return 0;
}

