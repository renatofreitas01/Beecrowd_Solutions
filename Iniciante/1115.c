/*********
Problem 1115
    Quadrante
By Renato Freitas
**********/
#include <stdio.h>

int main() {

    int x[100], y[100], cont = -1;



    do{
        cont++;
        scanf("%d %d", &x[cont], &y[cont]);
        if(x[cont] > 0 && y[cont] > 0){
            printf("primeiro\n");
        } else if(x[cont] < 0 && y[cont] > 0){
            printf("segundo\n");
        } else if(x[cont] < 0 && y[cont] < 0){
            printf("terceiro\n");
        } else if(x[cont] > 0 && y[cont] < 0) {
            printf("quarto\n");
        }
    }while(x[cont] != 0 && y[cont] != 0);


    return 0;
}