// Online C compiler to run C program online
#include <stdio.h>

int main() {
   
   int first = 0;
   int second = 1;
   int third;
   int n;
   
   printf("Enter the number to print the Fibonacci : ");
   scanf("%d",&n);
   
       
   for(int i = 0; i<n; i++){
        
        third = first + second;
        first = second;
        second = third;
        
        printf("%d ",third);
   }
   
    return 0;
}