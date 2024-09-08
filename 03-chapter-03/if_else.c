#include<stdio.h>

int main(){

    int a,b;
    printf("Enter a Number \n");
    scanf("%d", & a);

    if(a%2==0){
        printf("Number is Even %d\n",a);

    }
    else{
        printf("Number is odd %d\n",a);
    }
    return 0;
}