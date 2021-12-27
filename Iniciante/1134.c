/*********
Problem 1134
    Tipo de Combustível
By Renato Freitas
**********/
#include <stdio.h>

int main(){

    int n, Al = 0, Gas = 0, Di = 0;

    do{
        scanf("%d", &n);

        switch (n) {
            case 1:
                Al++;
                break;
            case 2:
                Gas++;
                break;
            case 3:
                Di++;
                break;
            default:
                break;
        }

    } while (n != 4);

    printf("MUITO OBRIGADO\nAlcool: %d\nGasolina: %d\nDiesel: %d\n", Al, Gas, Di);

    return 0;
}