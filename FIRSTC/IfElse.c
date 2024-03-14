#include <stdio.h>

int main(int argc, char const *argv[])
{
    /* code */
    int age;
    printf("enetr your age\n");
    scanf("%d", &age);

    printf("you have entered %d as your age\n",age);

    if (age>=18)
    {
        printf("you are eligible to vote!");    
    }

    else if (age>10)
    {
        printf("you are between 10 to 18");
    }
    
    else{
        printf("you cannot vote!");
    }
    
    return 0;
}
