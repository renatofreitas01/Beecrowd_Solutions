/*********
Problem 1179
    Preenchimento de Vetor IV
By Renato Freitas
**********/
#include <stdio.h>

int main() {

    int i, j, cp = 0, ci = 0;
    int n[15], par[5], impar[5];

    for(i = 0; i < 15; i++){
        scanf("%d", &n[i]);
        if(n[i]%2 == 0){
            par[cp] = n[i];
            cp++;
            if(cp == 5){
                for (j = 0; j < 5; j++) {
                    printf("par[%d] = %d\n", j, par[j]);

                }
                cp = 0;
            }
        } else{
            impar[ci] = n[i];
            ci++;
            if(ci == 5){
                for (j = 0; j < 5; j++) {
                    printf("impar[%d] = %d\n", j, impar[j]);
                }
                ci = 0;
            }
        }
    }

    for(i = 0; i < ci; i++){
        printf("impar[%d] = %d\n", i, impar[i]);
    }

    for(i = 0; i < cp; i++){
        printf("par[%d] = %d\n", i, par[i]);
    }


    return 0;
}