#include <stdio.h>
int main()
{
    int n, i=1, first=1;
    scanf("%d", &n);

    //选确定n是几位数
    while(i<n){
        first *= 10;
        i++;
    }

    //遍历所有的，如当i为3时，三位数，即100-999
    int j, k, l, d, sum=0;
    i = first;
   while(i < first*10){
       int t = i, sum = 0;
       do{
           int d = t%10;
           t /= 10;

           int p=1, j=0;
           while (j<n){
               p *= d;
               j++;
           }
           sum += p;
       } while (t>0);
       if (sum == i){
           printf("%d\n", i);
       }

       i++;
   }




    return 0;
}