/*********
Problem 1096
    Sequencia IJ 2
By Renato Freitas
**********/
#include <stdio.h>
 
int main() {
    
    int i, j, a = 1,b = 7;
    
    for(i = 0; a != 11; i++){
        for(j = 0; j < 3; j++){
            printf("I=%d J=%d\n", a, b);
            b = b - 1;
        }
        b = 7;
        a = a + 2;
    }
    
    
    return 0;
}