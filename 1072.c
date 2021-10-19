/*********
Problem 1072
    Intervalo 2
By Renato Freitas
**********/
#include <stdio.h>

int main() {
 
    int a, i, j=0;
    
    scanf("%d", &a);
    
    int b[a];
    
    for(i = 0; i < a; i++){
        scanf("%d", &b[i]);
    }
    
    for(i = 0; i < a; i++){
        if(b[i] >= 10 && b[i] <= 20){
            j++;
        }
    }
    
    printf("%d in\n%d out\n", j,  a-j);
    
    return 0;
}
