#include <stdio.h>
int main(){
    int x,sum=0;
    scanf("%d",&x);
    for(int i=1;i<x;i++){
        if(x%1==0) sum = sum+i;
        }
    if(sum==x) printf("true");
     else printf("false");
return 0;
    }

//gcd by using fun//
#include <stdio.h>
int perfect(int x){
    int sum=0;
    for(int i=1;i<x;i++){
        if(x%i==0) sum = sum+i;
        }
        return sum=x;
    }
    int main(){
        int x;
        scanf("%d",&x);
        int a=perfect(x);
        
        if(a)printf("true");
        else printf("false");
        return 0;

    }
