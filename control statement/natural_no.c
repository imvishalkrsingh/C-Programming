// wap to print the sum of n natural no...........
#include<stdio.h>
int main(){
    int n;
    printf("Enter the value of n :\n");
    scanf("%d",&n);

    int sum =0;

    for(int i=1;i<=n;i++){
        sum=sum+i;
    } 
     printf("sum is : %d \n",sum);
     
}