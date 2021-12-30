/*********
Problem 1185
    Acima da Diagonal Secundária
By Renato Freitas
**********/
#include <stdio.h>

int main() {

    int i, j, cont = 0, limit = 11;
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
            if(j < limit){
                sum = sum + m[i][j];
                cont++;
            } else if(j == limit){
                limit--;
            }
        }
    }

    if(str[0] == 'M'){
        sum = sum/cont;
    }

    printf("%.1f\n", sum);

    return 0;
}
