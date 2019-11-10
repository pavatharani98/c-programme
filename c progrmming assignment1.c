#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *arr;
    int limit,i;
    int sum=0;

    printf("enter total number of elements: ");
    scanf("%d" ,&limit);

    arr=(int*)malloc(limit*)sizeof(int);

    if(arr==null)
    {
        printf("insufficient memory, exiting... /n");
    }

    printf("enter %d elements:\n",limit);
    for(i=0; i<limit; i++)
    {
        printf(enter element %3d: ",i+1);
        scanf("%d",(arr+i));
        sum=sum + *(arr+i);
    }

    print("array element are:");
    for(i=0; i<limit; i++)
        printf("%3d",*(arr+i));


    printf("\nsum of all elements: %d\n",sum)

    return 0;
