#include <stdio.h>
void main(){
     int x,y;
     scanf("%d%d",&x,&y);
     for(int i=1;i<=x;i++){
        printf("%d * %d=%d\n",i,y,i*y);
     }
}