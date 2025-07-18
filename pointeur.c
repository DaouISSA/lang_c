#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>


int a=5; int b=10; int c=20;

int *p1= &a; int *p2= &b; int *p3=&c;

void echanger(int *x, int *y){
    int temp = *x;
    *x=*y;
    *y=temp ;
} 
int main(){
    echanger(p1,p2);
    printf("a=%d\n",a);
    printf("b=%d",b);
    return EXIT_SUCCESS;
} 