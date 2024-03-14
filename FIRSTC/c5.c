#include <stdio.h>

int main(int argc, char const *argv[])
{
    /* code */
    int a=8;
    float b=7.333;
    printf("the value of a is %d and value of b is %0.4f \n",a,b);
    printf("the value of a is %d and value of b is %10.4f \n",a,b);
    printf("%2.4f \n",b);
    printf("%8.4f \n",b);

    return 0;
}
