#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

int data[13] ={1,2,0,11,3,40,15,-5,6,7,8,9,10};

int minIndex(int start){

    int min= start;
    for(int i = start +1; i<13;i++){
        if(data[i]<data[min]){
            min=i;
        } 
    } 
return min;
} 

void sortest(){
    for(int i =0;i<13;i++){
        int idx= minIndex(i);
        int temp = data[i];
        int  min= data[idx];
        data[i] = min;
        data[idx]= temp;   
    } 
} 

int main(){
    sortest();

    for(int i=0;i<13;i++){
        printf("%d\n ",data[i] );
    } 
    
} 