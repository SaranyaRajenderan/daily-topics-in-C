#include <stdio.h>
#include <math.h>
void primenumber(int n){
    int flag=0;
    for(int i=2;i<=n-1;i++){
        if(n%i==0)
        flag++;
        break;
    }
    if(flag==0) printf("%d is a prime number",n);
    else printf("%d is not a prime number",n);
}
int main()
{
    int n;
    scanf("%d",&n);
    primenumber(n);
}