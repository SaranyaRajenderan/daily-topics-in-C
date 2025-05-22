#include <stdio.h>
void sum(int*a,int*b)
{
    int t=*a;
    *a=*b;
    *b=t;
}
int main(){
    int a=5,b=20;
    int *p=&a,*q=&b;
    int sum =*p+*q;
printf("%d",*p+*q);
}