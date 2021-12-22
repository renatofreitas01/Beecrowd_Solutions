/*********
Problem 1156
    Sequência S II
By Renato Freitas
**********/
#include <stdio.h>

int main() {

    float i, sum = 0, a = 1, b = 1;

    for(i = 1; i <= 100; i++){
        sum += a/b;
        a += 2;
        b = b*2;
    }

    printf("%.2f\n", sum);

    return 0;
}
