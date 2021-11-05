/*********
Problem 1114
    Senha Fixa
By Renato Freitas
**********/
#include <stdio.h>

int main() {

    int pass;

    do{

        scanf("%d", &pass);

        if(pass != 2002){
            printf("Senha Invalida\n");
        }
        
    } while (pass != 2002);

    printf("Acesso Permitido\n");

    return 0;
}