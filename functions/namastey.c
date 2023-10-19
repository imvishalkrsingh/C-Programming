#include<stdio.h>
void namastey();
void bonjour();
int main(){
    char ch;
    printf("Enter 'i' for indian and 'f' for france : ");
    scanf("%c",&ch);
    if (ch=='i')
    {
        namastey();
    }
    else{
        bonjour();
    }
    return 0;
}
void namastey(){
    printf("Namastey....");
}
void bonjour(){
    printf("Bonjour \n");
}