/*********
Problem 1865
    Mjölnir
By Renato Freitas
**********/
#include <stdio.h>
#include <string.h>

int main() {

    int n;
    int i, aux;
    char str[100];

    scanf("%d", &n);
    for(i = 0; i < n; i++){
        scanf("%s", str);
        scanf("%d", &aux);
        if(strcmp(str,"Thor") == 0){
            printf("Y\n");
        } else {
            printf("N\n");
        }
    }

    return 0;
}