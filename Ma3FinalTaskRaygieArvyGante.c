#include <stdio.h>

int main()
{
   int selection, price, payment, change;
   printf("Select your order\n");
   printf("[1] Milk Tea (450)\n[2] Halo-halo (240)\n[3] Ice cream (500)\n");
   printf("Choice: ");
   scanf("%d", &selection);

   switch(selection){
   
   case 1: price = 450;
   printf("Input payment: ");
   scanf("%d", &payment);
   if(payment >= price){
   printf("You purchased Milk Tea.\n");
   printf("Thank you for buying\n");
   printf("Enjoy your Milk Tea\n");
   change = payment - price;
   printf("Change: %d", change);
   }
   else{
   printf("You don't have enough balance!");
   }
   break;
   
   case 2: price = 240;
   printf("Input payment: ");
   scanf("%d", &payment);
   if(payment >= price){
   printf("You purchased Halo-halo.\n");
   printf("Thank you for buying\n");
   printf("Enjoy your Halo-halo\n");
   change = payment - price;
   printf("Change: %d", change);
   }
   else{
   printf("You don't have enough balance!");
   }
   break;
 
   case 3: price = 500;
   printf("Input payment: ");
   scanf("%d", &payment);
   if(payment >= price){
   printf("You purchased Ice cream.\n");
   printf("Thank you for buying\n");
   printf("Enjoy your Ice cream\n");
   change = payment - price;
   printf("Change: %d", change);
   }
   else{
   printf("You don't have enough balance!");
   }
   break;
   
   default:
   printf("Invalid Input!!");
   }
   return 0;
}