/*********
Problem 1143
    Quadrado e ao Cubo
By Renato Freitas
**********/
#include <stdio.h>
#include <math.h>

int main(){

    int n, i, j;

    scanf("%d", &n);

    if(n > 1 && n < 1000){
        for(i = 1; i < n+1; i++){
            for(j = 1; j < 4; j++) {
                if(j < 3){
                    printf("%.0f ", pow(i,j));
                } else{
                    printf("%.0f\n", pow(i,j));
                }
            }
        }
    }

    return 0;
}