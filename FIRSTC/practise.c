// #include <stdio.h>

// int main(int argc, char const *argv[])
// {
//     int a,b,sum;
//     scanf("%d",a);
//     scanf("%d",b);
//     sum=a+b;
//     printf("%d",sum);
//     return 0;
// }

#include <stdio.h>

// int main()
// {
//   float s,u,t,a;
//   printf("values of u,t,a are:");
//   scanf("%f%f%f",&u,&t,&a);

//   s=(u*t)+(1/2*a*t*t);
//   printf("%f",s);

//   return 0;
// }



// int main(int argc, char const *argv[])
// {
//     int a,b,c;
//     printf("the two numbers are:");
//     scanf("%d%d",&a,&b);

//     c=a;
//     a=b;
//     b=c;

//     printf("value of a after swapping is %d\n",a);
//     printf("value of b after swapping %d",b);

//     return 0;
// }



// int main(int argc, char const *argv[])
// {
//     int a,b;
//     printf("num1:");
//     scanf("%d",&a);

//     printf("num2:");
//     scanf("%d",&b);

// if (a==b)
// {
//     printf("num1 n num2 are equal");
// }
// else
// {
//     printf("num1 n num2 are not equal");
// }
//     return 0;
// }



// int main(int argc, char const *argv[])
// {
//     int a;
//     printf("enter a:");
//     scanf("%d",&a);

//     if (a%2 == 0)
//     {
//         printf("a is even");
//     }
//     else
//     {
//         printf("a is odd");
//     }
    
//     return 0;
// }



// CHECK WHETHER A YAER IS LEAP YEAR OR NOT
// int main(int argc, char const *argv[])
// {
//     int a;
//     printf("enter the year:");
//     scanf("%d",&a);

//     if (a%4==0)
//     {
//         if (a%100==0)
//         {
//             if (a%400==0)
//             {
//                 printf("a is leap year");
//             }  
//             else
//             {
//                 printf("a is not a leap year");
//             }       
//         }
//         else
//         {
//             printf("a is leap year");
//         }   
//     }
//     else
//     {
//         printf("a is not a leap year");
//     }
    
//     return 0;
// }



// int main(int argc, char const *argv[])
// {
//     int a,b,c,d;
//     printf("values of a,b,c are:");
//     scanf("%d\n%d\n%d",&a,&b,&c);
    
//     d=a>b?(a>c?a:c):(b>c?b:c);

//     printf("largest num is %d",d);

//     return 0;
// }



// int main(int argc, char const *argv[])
// {
//     int a,b,sum;
//     printf("values of a,b are:");
//     scanf("%d%d",&a,&b);

//     sum=a+b;

//     if (a==b)
//     {
//         printf("%d",sum*3);
//     }
//     else
//     {
//         printf("%d",sum);
//     } 
//     return 0;
// }



// int main(int argc, char const *argv[])
// {
//     int a,diff;
//     printf("value of a is:");
//     scanf("%d",&a);

//     diff=a-51;

//     if (a>51)
//     {
//         printf("%d",diff*3);
//     }
//     else
//     {
//         printf("%d",diff);
//     }
    
//     return 0;
// }



// #include<stdbool.h>

// int main(int argc, char const *argv[])
// {
//     int a,b;
//     bool c = true;
//     bool d = false;
//     printf("values of an b are:");
//     scanf("%d%d",&a,&b);

//     if (a==30 || b==30 || a+b==30)     
//     {
//         printf("%d",c);
//     }
//     else
//     {
//         printf("%d",d);
//     }
//     return 0;
// }



// #include<stdbool.h>

// int main(int argc, char const *argv[])
// {
//     int a;
//     printf("value of a:");
//     scanf("%d",&a);
    
//     bool b = true;
//     bool c = false;

//     if (a%3==0 || a%7==0 || (a%3==0 && a%7==0) )
//     {
//        printf("%d",b); 
//     }
//     else
//     {
//        printf("%d",c); 
//     }
//     return 0;
// }



// int main(int argc, char const *argv[])
// {
//     int a,b,c;
//     printf("enter the angles of the triangle:");
//     scanf("%d%d",&a,&b);

//     c=180-a-b;

//     printf("third angle of triangle is %d",c);

//     return 0;
// }


// int main(int argc, char const *argv[])
// {
//     int a, hr;
//     printf("minutes are:");
//     scanf("%d",&a);

//     hr=a/60;
//     a=a%60;

//     printf("%d hours %d minutes ",hr,a);

//     return 0;
// }


// int main(int argc, char const *argv[])
// {
//     int a;
//     float b;
//     printf("kilometers per hour:");
//     scanf("%d",&a);
    
//     b=a*0.621;

//     printf("%f",b);

//     return 0;
// }



// int main(int argc, char const *argv[])
// {
//     int mon;
//     printf("input month no.");
//     scanf("%d",&mon);

//     switch (mon)
//     {
//     case 1:
//     case 3:
//     case 5:
//     case 7:
//     case 8:
//     case 10:
//     case 12:
//         printf("month have 31 days\n");
//         break;
//     case 2:
//         printf("2nd month is feb which has 28 days n in leap year 29 days");
//         break;
//     case 4:
//     case 6:
//     case 9:
//     case 11:
//         printf("month have 30 days\n");
//         break;
//     default:
//         printf("invalid month number\n");
//         break;
//     }
//     return 0;
// }



// int main(int argc, char const *argv[])
// {
//     int mon;
//     printf("input month no.");
//     scanf("%d",&mon);

//     switch (mon)
//     {
//     case 1:
//         printf("january");
//         break;
//     case 2:
//         printf("febuary");
//         break;
//     case 3:
//         printf("march");
//         break;
//     case 4:
//         printf("april");
//         break;
//     default:
//         printf("this system knows month only from 1 to 4");
//         break;
//     }
//     return 0;
// }



// int main(int argc, char const *argv[])
// {
//     int a,a1,a2,gross;
//     printf("ramesh's basic salary is:");
//     scanf("%d",&a);
//     a1=0.40*a;
//     a2=0.20*a;
//     gross=a+a1+a2;
//     printf("gross salary:%d",gross);
//     return 0;
// }


int main(int argc, char const *argv[])
{
    
    return 0;
}

















