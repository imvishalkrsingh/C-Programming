// check alphabets whether it is lower case or upper case......
#include<stdio.h>
int main(){
    char ch;
    printf("Enter alphabet Character :");
    scanf("%c",&ch);
    if(ch>= 'A' && ch <= 'Z'){
        printf("Upper Case \n");
    }
    else if (ch >= 'a' && ch <= 'z')
    {
        printf("Lower Case \n");
    }
    else{
        printf("Not a english character .....\n");
    }
    return 0;
    
}