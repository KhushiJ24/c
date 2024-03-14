/*find the sum of first n natural number*/

#include<stdio.h>

int main(int argc, char const *argv[])
{
    /* code */
    int n,sum;
    printf("enter the number n:\n");
    scanf("%d",&n);
    sum=n*(n+1)/2;
    printf("sum of first n numbers is =%d",sum);
    return 0;
}
