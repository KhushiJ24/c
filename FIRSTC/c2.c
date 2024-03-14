/*cal the area n circumference of circle*/
#include<stdio.h>

int main()
{
    /* code */
    float a,r,circum,pie=3.14;
    printf("enter the r:\n");
    scanf("%f", &r);
    a=pie*r*r;
    printf("area of circle=%f", a);

    circum=2*pie*r;
    printf("\ncircumference of the circle=%f", circum);

    return 0;
}
