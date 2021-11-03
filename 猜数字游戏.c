#include <stdio.h>

int main()
{   
    int num, n;
    scanf("%d %d", &num, &n);
    int inp, cnt=0, finished=0;

    do {
        scanf("%d", &inp);
        cnt++;
        if(inp<0){
            printf("Game Over\n");
            finished =1;
        } else if(inp>num){
            printf("Too big\n");
        } else if(inp<num){
            printf("Too small\n");
        } else{
            if(cnt == 1){
                printf("Bingo\n");
            } else if(cnt <= 3){
                printf("Lucky you\n");
            } else{
                printf("Good guess\n");
            } 
            finished=1;
            
        }
        if (cnt == n){
            if (!finished){
                printf("Game over\n");
                finished=1;
            }
        }
    } 
    while (!finished);


    return 0;
}