#include <stdio.h>
//逆序三位数
int main()
{
    int a;
    scanf("%d", &a);

    int b = a%10;
    int c = a/100;
    int d = (a-c*100)/10;
    int e = b*100 + d*10 + c;

    //这样输出会导致如果d、c是0，变成007之类的，所以最后输出还是要把它们变成三位数
    // printf("%d%d%d\n", b, d, c);

    printf("%d\n", e);

    return 0;

}

