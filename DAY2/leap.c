#include <stdio.h>
 void main(){
    int year =2006;
    if(((year %4==0)&&(year %100!=0)) ||(year %400==0))
    printf("leap day");
 else
    printf("not a leap day");
 }