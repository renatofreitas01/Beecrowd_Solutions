/*********
Problem 1848
    Corvo Contador
By Renato Freitas
**********/
#include <stdio.h>
#include <string.h>

int main() {

    char str[50];
    int cont = 0, sum = 0;

    while (cont != 3) {
        gets(str);
        if (strcmp(str, "caw caw") == 0) {
            printf("%d\n", sum);
            sum = 0;
            cont++;
        } else if(strcmp(str, "--*") == 0) {
            sum += 1;
        } else if(strcmp(str, "-*-") == 0) {
            sum += 2;
        } else if(strcmp(str, "*--") == 0) {
            sum += 4;
        } else if(strcmp(str, "-**") == 0){
            sum += 3;
        } else if(strcmp(str, "**-") == 0){
            sum += 6;
        } else if(strcmp(str, "*-*") == 0){
            sum += 5;
        } else if(strcmp(str, "***") == 0){
            sum += 7;
        }
    }

    return 0;
}