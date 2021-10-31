#include <stdio.h>
//然后是几点
int main()
{
    int a, b;
    scanf("%d %d", &a, &b);

    int t = a/100 *60 + a%100;
    a = (t+b)/60*100 + (t+b)%60;

    printf("%d\n", a);
        return 0;
}