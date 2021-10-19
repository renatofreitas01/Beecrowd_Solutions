/*********
Problem 2670
    Máquina de Café
By Renato Freitas
**********/
#include <stdio.h>
 
int main() {
 
    int a, b, c, i, j, d[3], aux;
    
    scanf("%d %d %d", &a, &b, &c);
    
    if(a >= 0 && b >= 0 && c >= 0 && a <= 1000 && b <= 1000 && c <= 1000){
        d[0] = 2*b+4*c;
        d[1] = 2*a+2*c;
        d[2] = 4*a+2*b;
        
        for(j = 0; j < 3; j++){
            for(i = 0; i < 2; i++){
                if(d[i] < d[i+1]){
                    aux = d[i];
                    d[i] = d[i+1];
                    d[i+1] = aux;
                }
            }
        }
        
        
        
        printf("%d\n", d[2]);
    }
    
    return 0;
}