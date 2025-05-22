#include <stdio.h>
int main(){
    int x;
    int n;
    scanf("%d",&x);
    int ans =0;
    while(x>0){
        int n=x%10;
        ans =ans *10+n;
         x=x/10; //assignment operator//
    }
    printf("%d\n",ans);
    return 0;
}