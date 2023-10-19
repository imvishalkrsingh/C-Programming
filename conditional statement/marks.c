// check results through control statements;
#include<stdio.h>
int main(){
    int marks;
    printf("Enter your marks :\n");
    scanf("%d",&marks);
    if (marks >=60)
    {
        printf("First Division \n");
    }
    else if (marks < 60 && marks >45)
    {
        printf("Second Division \n");
    }
    else if (marks <=45 && marks >=30 )
    {
        printf("Third Division \n");
    }
    else{
        printf("fail \n");
    }
}