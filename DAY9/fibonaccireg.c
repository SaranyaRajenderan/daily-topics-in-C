#include <stdio.h>
int fibo(int n){
    if(n==0)return 0;
    if (n==1) return 1;
    if (n==2) return 1;
    return fibo(n-1)+fibo (n-2)+fibo(n-3);//fibonacci and trobonacci//
}
int main(){
       printf("%d",fibo(5));
}