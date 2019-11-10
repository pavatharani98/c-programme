#include <stdio.h>
#include <stdlib.h>

int main()
{
   int val=0;
   int sq=0;
   double root=0.0;
   printf("enter a positive integer:");
   scanf("%d",&val);
   calculations(val,sq,root);
   printf("square:%d\n",sq);
   printf("squreroot:%f\n",root);


    return 0;

}
void calculations(int val,int square,double root)
{
    square=val*val;
    return square;
    root=sqrt(val);
    return root;

}
