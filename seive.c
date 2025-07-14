#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

static bool nbre[100];
void sieve(){
    for(int i=0;i<100;i++){
        nbre[i]=true;

        for(int j=2;j<100;j++){
            if(j%i==0){
                nbre[j]=false;
            }
        }

    }
}

int main(){
    sieve();
    for(int i=0; i<100;i++){
        if(nbre[i]){
            printf("%d",i);
        }
    }
    return EXIT_SUCCESS;
}
