// Online C compiler to run C program online
#include <stdio.h>

int main() {
   
   int a;
   
   printf("Enter the number to check the number is even or odd : ");
   scanf("%d",&a);
   
   if(a % 2 == 0){
       printf(" a is even Number");
   }
   else{
       printf("a is odd number");
   }

    return 0;
}