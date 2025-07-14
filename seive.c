#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

static bool nbre[100];



void marquer_multiple(int number){
    for(int i=2*number;i<100;i=i+number){
        nbre[i]=false; 
    }
} 

void sieve(){
    for(int i=0;i<100;i++){
        nbre[i]=true;
    } 

     for(int i=2;i<100;i++){
        marquer_multiple(i);
     }   

    
}

int main(){
    
    sieve();
    for(int i=2; i<100;i++){
        if(nbre[i]){
            printf("%d\n ",i);
        }
    }
    
    return EXIT_SUCCESS;
}
