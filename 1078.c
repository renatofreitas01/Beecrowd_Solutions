/*********
Problem 1078
    Tabuada
By Renato Freitas
**********/
#include <stdio.h>

int main() {
    
    int a, i;
    
    scanf("%d", &a);
    
    for(i = 1; i < 11; i++){
        printf("%d x %d = %d\n", i, a, i*a);
    }
    
    return 0;
}