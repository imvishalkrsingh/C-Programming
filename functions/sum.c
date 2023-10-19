#include<stdio.h>
int sum(int a, int b);
int main(){
    int a,b;
    printf("Enter the value of a :\n");
    scanf("%d",&a);
    printf("Enter the value of b :\n");
    scanf("%d",&b);

    sum(a,b);
    // return 0;
    
}
    int sum(int a, int b){
        int sum =0;
        sum=a+b;
        printf("sum of two integer is :%d \n",sum);
    }