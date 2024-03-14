#include<stdio.h>

int main(int argc, char const *argv[])
{
    int i,n;
    printf("enter the value of n: ");
    scanf("%d",&n);

    for ( i = 1; i<=n ; i++)
    {
        if (n%i==0)
        {
            printf("%d\n",i);
        }
        else
        {
            printf("%d is not the factor of %d\n",i,n);
        }
        
        
    }
    
    return 0;
}
