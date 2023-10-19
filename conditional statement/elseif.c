// check which no is greater or equal
#include<stdio.h>
int main()
{
    int num1;
    int num2;
    int check;
    printf("Enter the value of num1 :\n");
    scanf("%d",&num1);
    printf("Enter the value of num2 :\n");
    scanf("%d",&num2);
    if (num1<num2)
    {
        printf("Num2 is greater \n");
    }
    else if (num1>num2)
    {
        printf("Num1 is greater \n");
    }
    
    else{
        printf("Num1 and Num2 both are equals :\n");
    }
    
}