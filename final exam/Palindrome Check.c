#include<stdio.h>
int palin(int n,int sum)
{
    int re;
    if(n==0)
    {
        return sum;
    }
    re=n%10;
    sum=re+(sum*10);
    palin(n/10,sum);

}
int main()
{
    int n;
    scanf("%d",&n);
    int sum=palin(n,0);
    if(sum==n)

        printf("savash");
    else
    {
        printf("muri khan");
    }

    return 0;
}

