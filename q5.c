#include<stdio.h>
int main(){
    int n;
    char c='c';
    int sum=0;
    while(3<7){
   printf("Provide a number");
   scanf("%d",&n);
   if(n%2==0){
    sum=sum+n;
   }
   printf("Do you want to continue ?\n");
   scanf("%c",&c);
   if(c=='Y'){
    continue;
   }
   else{
    break;
    printf("%d",sum);
   }

   



}








}