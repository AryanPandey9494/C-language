#include<stdio.h>

int main(){

    int age ;
    printf("Enter Your age\n");
    scanf("%d",& age);

    if(age <= 75 && age>= 18){
        printf("You are above 18 and below 75, You can drive\n");
    
    }
    else{
        printf("You cannot drive\n");
    }
    return 0;
}