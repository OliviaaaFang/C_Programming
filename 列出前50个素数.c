#include <stdio.h>

int main()
{
    int x, cnt=0;

    x=1;
    while (cnt<50){
        //i和isPrime一定要在这里定义，不能在while之外，为什么？
        int i, isPrime=1;

        for(i=2; i<x; i++){
            if(x%i==0){
                isPrime=0;
                break;
            }
        }
        if (isPrime == 1){
            cnt++;
            printf("%d\t", x);
            if(cnt%5==0){
                printf("\n");
            }
        }
        x++;

    }


    return 0;
}