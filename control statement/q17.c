// WAP to keep taking numbers as input from users until user enters an odd numbers...

#include<stdio.h>
int main(){
    int n;
    do
    {
    printf("Enter the value of n :");
    scanf("%d",&n);
    printf("you have entered no : %d \n",n);
    // printf("\n");
    if (n % 2 != 0 )
    {
        break;
    }
    
    } while (1);
    printf("You have entered odd no..");
    
}