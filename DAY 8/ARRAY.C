#include <stdio.h>
int main(){
    int arr1[]={2,3,6,8,9};
    int arr2[]={1,3,5,6,7};
    int a1=sizeof(arr1)/sizeof(arr1[0]);
    int a2=sizeof(arr2)/sizeof(arr2[0]);
    int x=a1+a2;
   
    int result[x];
      for(int i=0;i<a1;i++){//insert element from arr1//
        result[i]=arr1[i];
      }
      for(int i=0;i<a2;i++){//insert element from arr2//
        result[a1+i]=arr2[i]; 
        }     
       for(int i=0;i<=x-1;i++){
        for(int j=0;j<=x-i-1;j++){
            if(result[j] > result[j+1]){
                int temp =result[j];
                 result [j]=result[j+1];
                 result[j+1]=temp;
            }
            }
        }
        printf("MS:\n");
        for(int i=0;i<x;i++){
            printf("%d",result[i]);
        }
        printf("\n");
        return 0;
    }