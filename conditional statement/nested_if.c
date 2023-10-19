#include<stdio.h>
int main(){
    int number;
    printf("Enter the Number :\n");
    scanf("%d",&number);
    if (number >=0)
    {
        printf("Number is Positive \n");
        if (number % 2 ==0)
        {
            printf("Number is Even \n");
        }
        else{
            printf("Number is odd \n");
        }
        
    }
    else{
        printf("Number is Negative \n");
        if (number % 2 ==0)
        {
            printf("Number is even \n");
        }
        else{
            printf("Number is odd \n");
        }
        
    }
    
}