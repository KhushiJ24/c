/*equation x=(-b+sqrt(b*b-4*a*c))/(find the sq root of quadratic 2*a) */

#include<stdio.h>
#include<math.h>

int main(int argc, char const *argv[])
{
    /* code */
    int x,a,b,c;
    printf("enter the value of a:");
    scanf("%d",&a);

    printf("enter the value of b:");
    scanf("%d",&b);
    scanf("%d",&c);

    x=(-b+sqrt(b*b-4*a*c))/(2*a);

    printf("%d",x);

    return 0;
}
