/*********
Problem 1019
    Conversão de Tempo
By Renato Freitas
**********/
#include <stdio.h>

int main() {
    
    int n, h, m, s;
    
    scanf("%d", &n);
    
    h = n/3600;
    m = (n-(h*3600))/60;
    s = n-(h*3600)-(m*60);
    
    printf("%d:%d:%d\n", h, m, s);
    return 0;
}