#include<stdio.h>
int main(){
    int number = 1234;
    int reverse = 0;
    for(int i = 0; i < 3; i++){
        reverse = number % 10;
         number = number / 10;
    }
    printf("%d",reverse);
}