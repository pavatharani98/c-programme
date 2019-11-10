#include <stdio.h>
#include <stdlib.h>
int result=0;
int a=12;
int main()
{

int b=10;
add(a,b);
printf("%d\n",result);
subtract( a,b);
printf("%d",result);
    return 0;
}
void add(int a,int b )
{
    result=a+b;
}
void subtract(int a ,int b)
{
    result=a-b;
}
