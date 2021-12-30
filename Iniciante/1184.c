/*********
Problem 1184
    Abaixo da Diagonal Principal
By Renato Freitas
**********/
#include <stdio.h>

int main() {

    int i, j, cont = 0;
    char str[1];
    float m[12][12], sum = 0;

    scanf(" %c", &str);

    for (i = 0; i < 12; ++i) {
        for (j = 0; j < 12; ++j) {
            scanf("%f", &m[i][j]);
        }
    }

    for (i = 0; i < 12; ++i) {
        for (j = 0; j < 12; ++j) {
            if(j < i){
                sum = sum + m[i][j];
                cont++;
            }
        }
    }

    if(str[0] == 'M'){
        sum = sum/cont;
    }

    printf("%.1f\n", sum);

    return 0;
}
