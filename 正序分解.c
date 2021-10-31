#include <stdio.h>
//整数分解

int main()
{
    int x;
    scanf("%d", &x);
    int mask = 1;
    int t = x;

    while (t > 9)
    {
        t /= 10;
        mask *= 10;
    }
    printf("x=%d, mask=%d\n", x, mask);

    do
    {
        int d = x / mask;
        printf("%d", d);
        if (mask > 9)
        {
            printf(" ");
        } else printf("\n");
        
        x %= mask;
        mask /= 10;
        

    } while (mask > 0);

    return 0;
}
