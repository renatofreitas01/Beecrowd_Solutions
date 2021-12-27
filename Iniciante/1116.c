/*********
Problem 1116
    Dividindo X por Y
By Renato Freitas
**********/
#include <stdio.h>

int main() {

    int a, i;

    scanf("%d", &a);

    float x[a], y[a];
    float resultado[a];

    for (i = 0; i < a; i++) {
        scanf("%f %f", &x[i], &y[i]);
        if(y[i] != 0){
            resultado[i] = x[i]/y[i];
        }
    }


    for (i = 0; i < a; i++) {
        if(y[i] != 0) {
            printf("%.1f\n", resultado[i]);
        } else{
            printf("divisao impossivel\n");
        }
    }

    return 0;
}