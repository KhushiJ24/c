#include <stdio.h>

int main()
{
    int a,b,c,d,e,perc;
    printf("Enter marks in sub1\n");
    printf("Enter marks in sub2\n");
    printf("Enter marks in sub3\n");
    printf("Enter marks in sub4\n");
    printf("Enter marks in sub5\n");

    scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);

    perc=(a+b+c+d+e)*100/500;
    if(perc>60)
    {
        printf("A Grade");
    }
    else
    {
        if (perc>=50 && perc<60)
        {
            printf("B Grade");
        }
        else
        {
            if(perc>=40 && perc<50)
            {
                printf("C Grade");
            }
            else 
            {
                printf("Fail");
            }
        }
    }
}