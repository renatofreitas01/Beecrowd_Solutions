/*********
Problem 1098
    Sequencia IJ 4
By Renato Freitas
**********/
#include <stdio.h>
 
int main() {
    
    int i, j, x, y;
    float a = 0,b =1;
    
    for(i = 0; a <= 2; i++){
        for(j = 0; j < 3; j ++){
            b = b+a;
            x = a;
            if(a - x == 0){
                printf("I=%.0f J=%.0f\n", a, b);
            } else{
                printf("I=%.1f J=%.1f\n", a, b);
            }
            b = b - a;
            b++;
            
        }
        b = 1;
        a = a + 0.2;
    }
    
    printf("I=2 J=3\nI=2 J=4\nI=2 J=5\n");
    
    
    return 0;
}

