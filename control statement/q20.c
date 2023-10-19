// print all the odd numbers from 5 to 50....
#include<stdio.h>
int main()
{
    printf("Odd Numbers ::::::");
    printf("\n");
    for (int i = 5; i <=50; i++)
    {
        if (i%2!=0) // odd number....
        {
            printf("%d \t",i);
            
        }
        
    }
    printf("\n");
    printf("\n");
    printf("Even Numbers :::::\n");
    for (int i = 5; i <=50; i++)
    {
        if(i%2==0) //even no......
        {
            printf("%d \t",i);
        }
    }



    return 0;
}