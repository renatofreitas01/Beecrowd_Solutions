/*********
Problem 1146
    Sequências Crescentes
By Renato Freitas
**********/
#include <stdio.h>

int main() {

    int a=1, i;

    while (a != 0) {
        scanf("%d", &a);
        for(i = 1; i <= a; i++){
            if(i < a){
                printf("%d ", i);
            } else{
                printf("%d\n", i);
            }
        }
    }
}