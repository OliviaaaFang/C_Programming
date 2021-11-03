#include <stdio.h>
//统计m到n之间的素数个数并对他们求和
int main()
{
    int m, n;
    scanf("%d %d", &m, &n);

    int cnt=0, sum=0, i;
    //需要对1做一次特殊判断，1不是素数
    if (m == 1){
        m =2;
    }//起点从2开始
    for(i=m; i<=n; i++){
        int isPrime=1, k;
        for (k=2; k<i; k++){
            if (i%k == 0){
                isPrime=0;
                break;
            } 
        }  
        if (isPrime){
            cnt++;
            sum += i;
            
        } 
         
    } printf("%d %d\n", cnt, sum);

    return 0;
}