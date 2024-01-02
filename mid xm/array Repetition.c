#include<stdio.h>
void repate(int a[],int n)
{
       int i,copy[n],count=0,j;
       int a2[count],count2,count3=0,count4=0;
       for(i=0;i<n;i++)
       {
             copy[i]=a[i];
       }
       for(i=0;i<n;i++)
       {
              count2=1;
              for(j=i+1;j<n;j++)
              {
                     if(a[i]==copy[j])
                     {
                       count2++;

                       a[j]=-1;
                     }
              }
              a2[count]=count2;
              count++;
       }

       for(i=0;i<count;i++)//1 1 2 1 3 2
       {
              for(j=i+1;j<count;j++)
              {
                     if(a2[i]>1&&a2[j]==a2[i])
                     {
                       count4=1;
                     }
              }

       }
       if(count4==1)
       {
              printf("YES");
       }
       else
              printf("NO");

}
int main()
{
  int n;
  scanf("%d",&n);
  int a[n];
  for(int i=0;i<n;i++)
  {
         scanf("%d",&a[i]);
  }
  repate(a,n);



  return 0;
}

