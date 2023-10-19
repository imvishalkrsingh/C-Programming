#include<stdio.h>
int main(){
    int age;
    printf("Enter your age : ");
    scanf("%d",&age);
    if (age <18)
    {
        printf("Your are not valid for voting \n");

    }
    else{
        printf("you are valid for voting \n");
    }
    return 0;
}