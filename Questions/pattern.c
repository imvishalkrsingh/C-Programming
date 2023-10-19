#include <stdio.h>

int main() {
    // Write C code here
    
    int a;
    int b = 1;
    printf("Enter the number : ");
    
    scanf("%d",&a);
    
    for(int i = 1; i<=a; i++){
        
        printf("\n");
        
        for(int j = 1; j<=i; j++){
            
             printf("%d \t", b++);  
             
        }
       
    }

    return 0;