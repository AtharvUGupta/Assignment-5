#include<stdio.h>

int main(){
   

   
  int array[10]={10,9,8,7,6,5,4,3,2,1};


   

    printf("The real array is ");
    for(int i=0;i<10;i++){
        printf("%d ",array[i]);
        }
        printf("\n");



        for(int i=0;i<10;i++){
        for(int j=0;j<10;j++){
            if(array[j]>array[j+1]){
                int temp=array[j];
                array[j]=array[j+1];
                array[j+1]=temp; 
            }
        }
    }

       
 

        printf("The sorted array is ");
        for(int i=0;i<10;i++){
        printf("%d  ",array[i]);
        
        }

    }


