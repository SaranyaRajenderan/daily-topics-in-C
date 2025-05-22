#include <stdio.h>
int main(){
    int x=5,y=4;
    do{
        if(x%5==0) printf("\nhi");
        x++;
    }
    while (x<=y);{
    printf("%d\n",x);
    }return 0;
}