#include <stdio.h>
#include <stdlib.h>

int main()
{
int a[5],i;
int *p;
printf("emter  element");
for (i=0;i<5;i++)
scanf("%d",&a[i]);
p=&a[0];
printf("element of array");
for(i=0;i<5;i++)
    printf("%d",*(p+i));


    return 0;
}
