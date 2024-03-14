#include<stdio.h>

int main(int argc, char const *argv[])
{
    int i,n,t1=0,t2=1,t3;
    printf("enter the value of n: ");
    scanf("%d",&n);

    printf("%d\n%d\n",t1,t2);

    for ( i = 2; i <= n; i++)
    {
        t3=t1+t2;
        printf("%d\n",t3);
        t1=t2;
        t2=t3;
    }
    
    return 0;
}
