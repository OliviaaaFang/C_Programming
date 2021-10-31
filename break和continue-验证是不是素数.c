#include <stdio.h>

int main()
{
    int x;
    //记住一定要读数；
    scanf("%d", &x);

    int i;
    int isPrime = 1;

    for (i=2; i<x; i++){
        if( x % i == 0){
            isPrime = 0;
            //break表示跳出循环；continue跳过这一轮剩下语句进入下一轮循环
            break;
        }
    }

    if( isPrime == 0 ){
        printf("不是素数\n");
    } else {
        printf("是素数\n");
    }

    return 0;
}