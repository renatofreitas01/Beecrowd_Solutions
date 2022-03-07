/*********
Problem 1866
    Conta
By Renato Freitas
**********/
#include <stdio.h>

int main() {

    int n;
    int i, s;

    scanf("%d", &n);

    for(i = 0; i < n; i++){
        scanf("%d", &s);
        if(s % 2 == 0){
            printf("0\n");
        } else{
            printf("1\n");
        }
    }

    return 0;
}
