#include <stdio.h>
//求平均值

int main()
{
    int count = 0, sum =0, num;
    printf("请输入要求平均值的数\n");
    scanf("%d", &num);
    
    while (num != -1){
          sum += num;
          count++;
          //不加这一行，那读进去用户输入的num后由于num此时不会发生改变
          //所以无法跳出循环，会变成死循环
          scanf("%d\n", &num);
       } 

    printf("平均值是%f", 1.0*sum/count);


    return 0;
}