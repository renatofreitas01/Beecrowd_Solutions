/*********
Problem 1066
    Pares, Ímpares, Positivos e Negativos
By Renato Freitas
**********/
#include <stdio.h>

int main() {
    
    int a[5], i, contp=0, conti=0, contpos=0, contneg=0;
    
    for(i = 0; i < 5; i++){
        scanf("%d", &a[i]);
    }
    for(i = 0; i < 5; i++){
        if(a[i]%2 == 0){
            contp++;
        } else{
            conti++;
        }
    }
    for(i = 0; i < 5; i++){
        if(a[i] > 0){
            contpos++;
        } else if(a[i] == 0){
            continue;
        } else{
            contneg++;
        }
    }
    
    printf("%d valor(es) par(es)\n", contp);
    printf("%d valor(es) impar(es)\n", conti);
    printf("%d valor(es) positivo(s)\n", contpos);
    printf("%d valor(es) negativo(s)\n", contneg);
    
    return 0;
}