// #include<stdio.h>

// int main(int argc, char const *argv[])
// {
//     /* code */
//     char kh[6];
//     scanf("%[^.]",&kh);
//     printf("%s",kh);

//     return 0;
// }
#include <stdio.h>

int main() {
    int num1, num2, sum;
    
    printf("Enter first number: ");
    scanf("%d", &num1);
    
    printf("Enter second number: ");
    scanf("%d", &num2);
    
    sum = num1 + num2;
    
    printf("Sum: %d\n", sum);
    
    return 0;
}