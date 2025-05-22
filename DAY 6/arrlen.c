#include <stdio.h>
int main(){
    int arr[]={1,2,6,5,7};
    int length=sizeof(arr)/sizeof(arr[0]);
    printf("%d\n",length);
  for (int i=0;i<length;i++){
    printf("%d",arr[i]);
  }
}