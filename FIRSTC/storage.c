#include <stdio.h>
// main(int argc, char const *argv[])
// {
//     auto int a;
//     printf("%d",a);

//     return 0;
// }

// void func(){
//     auto int a=5;
//     ++a;
//     printf("%d",a);        value of a is reinitialized
// }
// void main(){
//     func();
//     func();
//     func();
// }

// void main(){
//     int a=10, b=15;
//     {
//         int a=15,c=16;
//         printf("%d\n%d\n%d\n",a,b,c);
//         {
//             int b=25,d=30;
//             printf("%d\n%d\n%d\n%d",a,b,c,d);
//         }
//     }
// }

// void func(){
//     static int a=5;
//     ++a;
//     printf("%d",a);           /*value of a is not reinitialized*/
// }
// void main(){
//     func();
//     func();
//     func();
// }


// void main(){
//     int a=5;
//     register float b=10.5;
//     printf("%d\n",a);
//     printf("%d",b);
// }


// extern int a;
// void func(void);
// void main(){
//     printf("%d",x);
//     func();
// }
// int x;
// void func(){
//     x=20;
//     printf("%d",x);
// }


int i=0;
main(){
    printf("%d",i);
    inc();
    inc();
    dec();
    dec();
}
void inc(){
    i=i+1;
    printf("increament i=%d",i);
}
void dec(){
    i=i-1;
    printf("decreament i=%d",i);
}

