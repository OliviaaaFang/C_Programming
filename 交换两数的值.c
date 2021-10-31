#include <stdio.h>

//交换a、b的值

int main()
{
    int a = 5, b = 6, c;

    c=a;
    a=b;
    b=c;

    printf("a=%d, b=%d\n", a, b);

    return 0;
}