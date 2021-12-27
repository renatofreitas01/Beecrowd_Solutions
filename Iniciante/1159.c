/*********
Problem 1159
    Soma de Pares Consecutivos
By Renato Freitas
**********/
#include <stdio.h>

int main() {

    int a, i, sum;

    for(i = 0; i > -1; i++){
        scanf("%d", &a);
        if(a == 0){
            return 0;
        }
        if(a%2 != 0){
            a++;
        }
        sum = 0;
        for(i = 0; i < 5; i++){
               sum += a;
               a = a+2;
        }
        printf("%d\n", sum);
    }
}