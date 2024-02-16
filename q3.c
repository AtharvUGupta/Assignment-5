#include<stdio.h>
void print(int arr[], int n){
    for(int i=0;i<n;i++){
        printf("%d\t",arr[i]);
        printf("\n");
    }
}

int main(){
    int n,i,j,temp;
    printf("Enter a 4 digit number :");
    scanf ("%d",&n);
    int num[4];
    for(int i=0;i<4;i++){
        num[i]=n%10;
        n=n/10;
    }

    

   

     

}