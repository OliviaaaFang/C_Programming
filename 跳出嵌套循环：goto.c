#include <stdio.h>

int main()
{
    int one, two, three;
    int x=10;

    for(one=1; one<x*10; one++){
        for(two=1; two<x*10/2; two++){
            for(three=1; three<x*10/5; three++){
                if(one+ two*2 + three*5 == x*10){
                    printf("%d个1毛%d个2毛和%d个5毛可以凑成10块\n", one, two, three);
                    goto out;
                }
            } 
        } 

    }

out:
    return 0;
}