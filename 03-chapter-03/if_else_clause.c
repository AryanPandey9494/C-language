#include<stdio.h>

int main(){

    int num;
    printf("Enter Your Number\n");
    scanf("%d",&num);

    if(num==10){
        printf("Your Number Is 10\n");
    }

    else if (num==20){
        printf("Your Number is 20\n");
    }
    
    else if (num==30){
        printf("Your Number is 30\n");
    }
    else{
        printf("its niether 1,2 or 3\n");
    }

    return 0;


}