#include <stdio.h>
 void main(){
    int s1,s2,s3,s4,s5,total;
    float average;
    printf("enter a five sub marks");
    scanf("\n%d%d%d%d%d",&s1,&s2,&s3,&s4,&s5);

    total =s1+s2+s3+s4+s5;
    average =total/5;

    printf("total=%d \naverage= %f",total,average);
    90>="O";
    80>= "A";
    70>="B";
    60>="c";
    40<="better luck next time";
    if(average>=90) printf("O");
    else if(average>=80) printf("A");
    else if(average>=70) printf("B");
    else if(average>=60) printf("C");
    else  printf("better luck next time");

 }