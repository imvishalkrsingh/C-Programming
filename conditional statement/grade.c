// Grade marking according to results through control statements.........
#include<stdio.h>
int main(){
    int marks;
    printf("Enter your marks :\n");
    scanf("%d",&marks);
    if(marks < 30){
        printf("C grade");
    }
    else if(marks >30 && marks <=70 ){
        printf("B grade");
    }
    else if(marks >70 && marks <=90){
        printf("A grade");
    }
    else if(marks >90){
        printf("A+ grade" );
    }
    else{
        printf("Not a valid marks ");
    }
    return 0;
}