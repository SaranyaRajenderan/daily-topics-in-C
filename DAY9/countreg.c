#include <stdio.h>
int countdigitR(int x){
    if(x==0) return 0;
    else return 1+ countdigitR(x/10);
}
int main(){
    printf("%d",countdigitR(12345));
    printf("\n%d",countdigitR(12345));
}

