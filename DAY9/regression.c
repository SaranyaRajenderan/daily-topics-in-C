#include <stdio.h>
void numbers(int x){
    if(x==5)return;
    printf("%d",x);
    numbersdesc(x-1);//regression of numbersdesc// || //regrssion of numbers//
}
void numberdesc(int x){
    if(x==5) return;
    numbers(x-1); //call function//
       printf("%d",x);//print the value after cal fuction//
}
int main(){
    numbers(10);//main for printing numbers//
    numbersdesc(10);//main for printing numbersdesc//
}
void evennumbers(int n,int y){//printing even number//
    if (n>y){ return;
        printf("%d",n);
        evennumbers(n+2,y);
}
int main(){
        evennumbers(30,40);//main function for printing eve num in regression//
}
int main(){
    int x=2;
    while(x<=0)//print regression using while loop//
    {
        printf("%d",x);
        x+=2;
    }
}
}