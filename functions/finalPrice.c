#include<stdio.h>
void finalPrice(float value);
int main(){
    float value;
    printf("Enter the value of product \n");
    scanf("%f",&value);
    finalPrice(value);
    
}
    void finalPrice(float value){
        value=value+(0.18*value);
        printf("final price of the Product is : %f\n",value);
    }