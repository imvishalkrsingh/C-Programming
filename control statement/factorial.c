#include<stdio.h>
int main(){
    int n;
    int fact =1;
    printf("Enter the value of n :\n");
    scanf("%d",&n);
    for(int i=1;i<=50;i++){
        fact=fact*i;
    }
    printf("Factorial value is :%d ",fact);
}