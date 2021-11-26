#include <stdio.h>

int main()
{
   int n1;
   printf("Input Any Positive Integer: ");
   scanf("%d", &n1);
   while(n1 !=1){
   if(n1 %2 !=0){
   n1 = (n1 * 3) + 1;
   }
   else {
   n1 /= 2;
   }
   printf("Current Given Value is %d\n", n1);
   }
   return 0;
}