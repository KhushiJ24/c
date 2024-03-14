#include <stdio.h>

int main(int argc, char const *argv[])
{
    int i,n;
    scanf("%d",&n);

    for ( i = 1; i <= n; i++ )
    {
        printf("%d\n",n*(n-1)/2);
    }
    
    return 0;
}
