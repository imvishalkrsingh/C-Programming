// WAP to keep taking numbers from user until user enters a number which is multilple of 7.....
#include<stdio.h>
int main(){
    int n;
    do
    {    
    printf("Enter the value of n :");
    scanf("%d",&n);
    printf("%d \n",n);
    if (n % 7 ==0)
    {
        break;
    }
    
    } while (1);
    printf("Thank you");
    return 0;
    
}