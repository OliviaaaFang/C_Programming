#include <stdio.h>
//确定一个数是几位数

int main()
{
    int x;
    int n = 0;
    scanf("%d", &x);

    while ( x>1 ){
        n++;
        x /= 10;
    }
    printf("%d\n", n);

    return 0;

}