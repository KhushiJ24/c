#include <stdio.h>

// int main(int argc, char const *argv[])
// {
//     /* code */
//     int i;
//     for ( i = 0; i <= 5; )
//     {
//         printf("%d",i);
//         i++;
//     }
    
//     return 0;
// }
int main(int argc, char const *argv[])
{
    int i=0;
    for ( ; i <= 5; )
    {
        printf("%d\n",i);
        i++;
        if (i>5)
        {
            break;
        }
        
    }
    
    return 0;
}
