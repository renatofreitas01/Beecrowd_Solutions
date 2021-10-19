/*********
Problem 1060
    Números Positivos
By Renato Freitas
**********/
#include <stdio.h>

int main() {
 
    int i, t=0;
    float a[6];
    
    for(i = 0; i < 6; i++){
        scanf("%f", &a[i]);
    }
    
    for(i = 0; i < 6; i++){
        if(a[i] > 0){
            t++;
        }
    }
    
    printf("%d valores positivos\n", t);
    
    return 0;
}
