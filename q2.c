#include<stdio.h>
int main(){
    int dividend,divisor;
    printf("Enter the dividend ");
    scanf("%d",&dividend);
     printf("Enter the divisor ");
    scanf("%d",&divisor);
    for(int i=1;;i++){
        dividend=dividend-divisor;
        if(dividend<divisor){
            printf("The quotient is %d\n",i);
            printf("The remainder is %d\n",dividend);
            break;
        }

    }
    
}