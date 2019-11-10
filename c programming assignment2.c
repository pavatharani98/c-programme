#include <stdio.h>
#include <stdlib.h>

int main()
{
    int val1,val2,min;
    printf("enter an integer:");
    scanf("%d",&val1);
    printf("enter another integer:");
    scanf("%d",&val2);
    min=(val1<val2)?val1:val2;
    printf("minimum value is:%d\n,min");


    return 0;
}
