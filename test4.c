#include <stdio.h>
//逆序三位数
int main()
{
    int a;
    scanf("%d", &a);

    int b = a%10;
    int c = a/100;
    int d = (a-c*100)/10;
    printf("%d%d%d\n", b, d, c);

    return 0;

}

