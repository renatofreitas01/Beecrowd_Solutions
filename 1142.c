/*********
Problem 1142
    PUM
By Renato Freitas
**********/
#include <stdio.h>

int main(){

    int a, i, j, s = 1;

    scanf("%d", &a);

    for(i = 0; i < a; i++){
        for(j = 0; j < 3; j++){
            printf("%d ", s);
            s++;
        }
        s++;
        printf("PUM\n");
    }

    return 0;
}