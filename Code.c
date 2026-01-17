#include <stdio.h>

int main()
{
   int n, digit, givenDigit;
   float isFound = 0;
   
   printf("Enter n: ");
   scanf("%d", &n);
   
   if (n<=0){
       return 0;
   }
   
   printf("Enter the digit you want to check: ");
   scanf("%d", &givenDigit);
   
   if (givenDigit<0){
       return 0;
   }
   
   while (n>0){
       digit = n%10;
       n = n/10;
       
       if (digit==givenDigit){
           isFound=1;
       }
   }
   
   if (isFound==0){
       printf("Your digit was not found :<. What's wrong with you? Can't you see the number? ");
   }else{
       printf("Your digit was found :> ");
   }
   
   return 0;
}
