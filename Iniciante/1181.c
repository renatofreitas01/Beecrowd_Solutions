/*********
Problem 1181
    Linha na Matriz
By Renato Freitas
**********/#include <stdio.h>

int main() {

    int i, j, l;
    char str[1];
    float m[12][12], sum = 0;

    scanf("%d", &l);

    scanf(" %c", &str);

    for (i = 0; i < 12; ++i) {
        for (j = 0; j < 12; ++j) {
            scanf("%f", &m[i][j]);
        }
    }

    for (j = 0; j < 12; ++j) {
        sum = sum + m[l][j];
    }
    if(str[0] == 'M'){
        sum = sum/12;
    }

    printf("%.1f\n", sum);

    return 0;
}