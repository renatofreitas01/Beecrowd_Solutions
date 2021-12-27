/*********
Problem 2968
    Hora da Corrida
By Renato Freitas
**********/
#include <stdio.h>
 
int main() {
 
    int v, p, aux, i;
    
    scanf("%d %d", &v, &p);
    
    if(v >= 1 && p <= 10000){
        
        for(i = 1; i < 10; i++){
            aux = v*p*i*0.1 +0.9;
            if(i == 9){
                printf("%d\n", aux);
            } else {
                printf("%d ", aux);
            }
        }
    }
    
    return 0;
}
