#include <stdio.h>
 
int main()
{
   int remainder, reversedNbr = 0, nbr;
 
   printf("Enter a number to reverse: ");
   scanf("%d", &nbr);
   
   for(;nbr!=0; nbr = nbr/10){
    remainder = nbr % 10;
    reversedNbr = reversedNbr * 10 + remainder;
   }
 
   printf("The reversed number is = %d\n", reversedNbr);
 
   return 0;
}
