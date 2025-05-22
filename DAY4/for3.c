#include <stdio.h>
int main(){
    int i=6;
     for (i=1;i<=100;i++){
      if(i%6==0) break;
        printf("%d\n",i);
     } 
     printf("%d",i);
    }