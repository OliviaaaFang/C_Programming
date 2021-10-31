#include <stdio.h>

//计算平均值

int main()
{
    int a;
    int b;
    scanf("%d %d", &a, &b);
    //注意这里a、b是int，所以scanf的时候不能写%f

    double c = ( a + b )/2.0;

    printf("%d和%d的平均值是%f\n", a, b, c);

return 0;

}