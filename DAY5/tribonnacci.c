#include <stdio.h>
int main(){
    int x;
    scanf("%d\n",&x);
    int a=0,b=1,c=1;
    for(int i=1;i<=x;i++){
        if(x==1||x==2) printf("%d\n",1);
        else if(x==3) printf("%d\n",c);
    
    else{
        for(int i=1;i<=x;i++);
        int d=a+b+c;
        a=b;
        b=c;
        c=d;
    }
    printf("%d\n",c);
}}