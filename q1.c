#include<stdio.h>
#include<math.h>
int sum(int arr[],int n){
    int s=0;
    for(int i=0;i<n;i++){
        s=s+arr[i];

    }
    return s;
}
void check(int arr[],int n){
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                arr[j]=0;

            }

        }
    }
}

int main(){
    int n;
    printf("Enter a number\n");
    scanf("%d",&n);
    for(int i=1;i<100;i++){
        int x=pow(10,i);
        if(n/x==0){
           printf("The total number of digits in %d are %d\n",n,i) ;
           break;
        }
    
    }
     int arr[100];
    for(int i=0;i<100;i++){
        arr[i]=n%10;

        n=n/10;}
        check(arr,100);

       

        printf("The sum is %d", sum(arr,100));


    

  
    




    
   


    





}


    
    


   
    
    
   
