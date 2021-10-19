/*********
Problem 1095
    Sequencia IJ 1
By Renato Freitas
**********/
#include <stdio.h>
 
int main() {
    
    int i, a = 1,b = 60;
    
    do{
        printf("I=%d J=%d\n", a, b);
        a = a + 3;
        b = b - 5;
    } while(b != -5);
    return 0;
}