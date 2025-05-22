#include <stdio.h>
 int add(){
    int x,y;
    scanf("%d%d",&x,&y);
    return x,y;
 }
 int primenumber(int n){
    int flag=0;
    for (int i=2;i<=n-1;i++){
        if(n%i==0){return 0;
        }
    }
    return 1;
 }
 int main()
{
    int x;
    scanf("%d",&x);
    int n=primenumber(x);
        if(n==1) printf("%d is a prime number",n);
    else printf("%d is not a prime number",n);
}
