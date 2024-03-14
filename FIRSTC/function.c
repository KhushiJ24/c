#include<stdio.h>
// void display(){
//     printf("hello");
// }
// void main(){
//     printf("welcome\n");
//     display();
// }


// a and b are called parameters or formal arguments
// int add(int a,int b){
//     return a+b;
// }
// int main(int argc, char const *argv[])
// {
//     int x,y,z;           //x,y,z are actual parameters
//     x=10,y=20;
//     z=add(x,y);
//     printf("the addition of two values x and y is %d",z);
//     return 0;
// }


// to find the square of any number using function
// int sq(int a){
//     return a*a;
// }
// int main(int argc, char const *argv[])
// {
//     int x,y;
//     printf("value of x:");
//     scanf("%d",&x);
//     y=sq(x);
//     printf("square of x is %d",y);

//     return 0;
// }


// maximum of three numbers using function
// int max (int a,int b,int c){
//     if (a>b && a>c)
//     {
//         return a;
//     }
//     else if (b>a && b>c)
//     {
//         return b;
//     }
//     else
//     {
//         return c;
//     } 
// }
// int main(int argc, char const *argv[])
// {
//     int x,y,z,k;
//     printf("values of x,y,z are:");
//     scanf("%d%d%d",&x,&y,&z);
//     k=max(x,y,z);
//     printf("max of x,y,z is %d",k);
//     return 0;
// }



// to swap two numbers using functions

// int swap(int a,int b){
//     int c;
//     c=a;
//     a=b;
//     b=c;
//     return a,b;
// }
// int main(int argc, char const *argv[])
// {
//     int x=3,y=4;
//     swap(x,y);
//     printf("after swapping x and y are:%d,%d",y,x);
//     return 0;
// }


// to cal area n circum of circle using function
// int area(int r){
//     int a;
//     a=3.14*r*r;
//     return a;
// }
// int circum(int r){
//     int c;
//     c=2*3.14*r;
//     return c;
// }
// int main(int argc, char const *argv[])
// {
//     int r,Area,circumference;
//     printf("radius of circle is:");
//     scanf("%d",&r);
//     Area=area(2);
//     circumference=circum(2);
//     printf("area and circumference of circle with radius %d are:%d,%d",r,Area,circumference);
//     return 0;
// }


float square(float);

main(int argc, char const *argv[])
{
    float result=square(1.1);
    printf("%f",result);
    return 0;
}
float square(float a){
    return a*a;
}

