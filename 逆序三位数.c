#include <stdio.h>

//逆序分解
int main()
{
    int a;
    scanf("%d", &a);

    int rev=0, digit;
    while(a>0){
        digit = a%10;
        a /= 10;
        rev = rev * 10 + digit;
    } printf("%d\n", rev);

    return 0;

}

