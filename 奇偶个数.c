#include <stdio.h>

// 你的程序要读入一系列正整数数据，输入-1表示输入结束，-1本身不是输入的数据。
// 程序输出读到的数据中的奇数和偶数的个数。
int main()
{  int x;
   scanf("%d", &x);
   int evencnt=0, oddcnt=0;

   while ( x!= -1){
      if (x%2 == 0){
         evencnt++;
      } else {
         oddcnt++;
      }
      scanf("%d", &x);
   } printf("oddcnt=%d, evencnt=%d\n", oddcnt, evencnt);
      

return 0;
} 




