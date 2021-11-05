/*********
Problem 1117
    Validação de Nota
By Renato Freitas
**********/
#include <stdio.h>

int main() {

    float n1, n2, val = 0;

    do{
        scanf("%f", &n1);
        if(n1 > 10 || n1 < 0){
            printf("nota invalida\n");
        } else{
            val++;
        }
    } while (val != 1);

    val = 0;

    do{
        scanf("%f", &n2);
        if(n2 > 10 || n2 < 0){
            printf("nota invalida\n");
        } else{
            val++;
        }
    } while (val != 1);

    printf("media = %.2f\n", (n1+n2)/2);

    return 0;
}