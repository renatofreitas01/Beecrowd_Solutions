/*********
Problem 1847
    Bem-vindos e Bem-vindas ao Inverno!
By Renato Freitas
**********/
#include <stdio.h>

int main() {
    int a,b,c;
    int cont = 0;
    int d1, d2, dc;

    scanf("%d %d %d", &a, &b, &c);

    d1 = b-a;
    d2 = c-b;

    if(d1 > 0 && (d2 < 0 || d2 == 0)) {
        cont++;
    } else if(d1 > 0 && d2 > 0 && d1 > d2){
        cont++;
    } else if(d1 < 0 && d2 < 0 && d2 <= d1){
        cont++;
    } else if(d1 == 0 && d2 < 0){
        cont++;
    }


    if(cont != 0 || (a == b && b == c)){
        printf(":(\n");
    } else{
        printf(":)\n");
    }
    return 0;
}
