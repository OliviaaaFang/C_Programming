#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(0));
    int num = rand()%100+1;
    int count = 0;
    int a = 0;
    printf("我已经想好了一个1到100的数\n");

    do {
        printf("猜猜这个1到100之间的数\n");
        scanf("%d", &a);
        count++;
        if (a > num){
        printf("你猜的数大了。\n");
        } else if (a < num){
            printf("你猜的数小了\n");
        }
    } while (a != num);
    
    printf("太好了，你用了%d次就猜到了答案。\n", count);

    return 0;
}