#include <stdio.h>

/*a b c
 12 18 12
 18 12 6
 12 6  6
 6  6  0
 6  0*/

int main()
{
    int a, b, c;
    scanf("%d, %d", &a, &b);

    while ( b!= 0){
        c = a % b;
        a = b;
        b = c;
    } 
    
    printf("a、b的最大公约数是%d\n", a);

    return 0;
}