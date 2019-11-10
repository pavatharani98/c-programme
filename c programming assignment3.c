#include <stdio.h>
#include <stdlib.h>

int main()
{
   char inputstr[30];
   printf("enter any string:");
   gets(inputstr);
   int i=0;
   int j=strlen(inputstr)-1;
   while(i<j)
   {
       if(inputstr[i++]!=inputstr[j--])
       {
           printf("%s is not palindrome",inputstr);
           return;
       }
   }
   printf("%s is palindrome",inputstr);m
    return 0;
}
