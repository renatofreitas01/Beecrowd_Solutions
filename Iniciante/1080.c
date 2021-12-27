/*********
Problem 1080
    Maior e Posição
By Renato Freitas
**********/
#include <stdio.h>
#define TAM 100
int main() {
 
    int a[TAM], i, j, maior, pos;
    
    for(i = 0; i < TAM; i++){
        scanf("%d", &a[i]);
    }
    maior = a[0];

    for(j=0; j < TAM; j++){
        for(i = 0; i < TAM; i++){
            if(maior < a[i]){
                maior = a[i];
                pos = i+1;
            }
        }
    }
    
    printf("%d\n%d\n", maior, pos);
    
    return 0;
}
s