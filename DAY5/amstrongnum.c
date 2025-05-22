#include <stdio.h>
int main(){
    int x;
    scanf("%d",&x);
    int y=x;
    int count=0;
    while(x>0){
        x=x/10;
        count++;
    }
    x=y;
    int sum=0;
    for(int j=1;j<=count;j++){//number of digit 1 5 3//
        int r=x%10;//remainder x=%10 r=1
        int prod =1;//initial prod==1//
        for(int i=1;i<=count;i++){
            prod = prod*r;//prod
        }
        sum +=prod;
        x/10
    }
    return 0;
}