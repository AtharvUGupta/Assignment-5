#include<stdio.h>
int main(){
    char array[10]="abcdefghij";

    char input[100];
    printf("Enter a word  :");

    scanf("%s",input);
    int count =0;

    for(int i=0;input[i]!=0;i++){
        count =count +1;

    }

    for(int i=0;i<count;i++){
        for(int j=0;j<10;j++){
        if(input[i]!=array[j]){
            break;
            printf("Word can't be formed");
           
        }
        else{
            printf("It is possible");
            break;
        }
        
        }

    }
    

}