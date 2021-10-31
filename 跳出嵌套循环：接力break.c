#include <stdio.h>

//用1、2、5毛凑出10块

int main()
{
    int one, two, three;
    int exit, x=10;

    for(one=1; one<x*10; one++){
        for(two=1; two<x*10/2; two++){
            for(three=1; three<x*10/5; three++){
                if(one+ two*2 + three*5 == x*10){
                    printf("%d个1毛%d个2毛和%d个5毛可以凑成10块\n", one, two, three);
                    exit =1;
                    break;
                }
            } if (exit) break;
        } if (exit) break;

    }


    return 0;
}