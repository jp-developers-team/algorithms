#include<stdio.h>

// Imprimindo os números ÍMPARES
int main(){
    for (int i = 0; i <= 30; i++) {

        if(i % 2 == 0){
            continue;
        }

        printf("\n %d", i);
    }
}