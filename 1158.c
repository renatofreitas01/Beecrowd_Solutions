/*********
Problem 1158
    Soma de Ímpares Consecutivos III
By Renato Freitas
**********/
#include <stdio.h>

int main() {

    int n, i;
    scanf("%d", &n);

    int x[n], y[n];

    for(i = 0; i < n; i++){
        scanf("%d %d", &x[i], &y[i]);
    }
    

    for(i = 0; i < n; i++){
        if(x[i]%2 == 0){
            x[i]++;
        }
        x[i] = (y[i]*(y[i]-1) )+ x[i]*y[i];
        printf("%d\n", x[i]);
    }
    return 0;
}