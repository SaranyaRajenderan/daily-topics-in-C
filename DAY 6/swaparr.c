#include <stdio.h>
int main(){
    int arr[5]={1,2,3,4,5};
    int size =sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<=size;i++){
        int t=arr[i];
        arr[i]=arr[size-i-1];
        arr[size-i-1]=t;
    }
    for(int i=0;i<size;i++)
        printf("%d",arr[i]);
}