#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>


static bool data[100];

void sievetest(){

    for(int i=0;i<100;i++){
        data[i]=true; 
    } 
    for(int i=2;i<100;i++){
        for(int j=2*i;j<100;j=j+i){
            data[j]= false; 
        } 
    } 
} 

int main(){
    sievetest();
    for(int i=2;i<100;i++){
        if(data[i]){
            printf("%d\n ",i);

        } 


    } 
    return EXIT_SUCCESS;
} 
