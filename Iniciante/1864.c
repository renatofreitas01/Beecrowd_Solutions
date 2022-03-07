/*********
Problem 1864
    Nossos Dias Nunca Voltarão
By Renato Freitas
**********/
#include <stdio.h>

int main() {

    int n;
    int i;
    char str[34] = "LIFE IS NOT A PROBLEM TO BE SOLVED";

    scanf("%d", &n);

    for(i = 0; i < n; i++){
        printf("%c", str[i]);
    }
    
    printf("\n");
   
    return 0;
}