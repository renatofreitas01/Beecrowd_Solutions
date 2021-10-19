/*********
Problem 2879
    Desvendando Monty Hall
By Renato Freitas
**********/
#include <stdio.h>
 
int main() {
 
    int a, i, wins = 0;
    
    scanf("%d", &a);
    
    if(a >= 1 && a <= 10000){
        int b[a];
        
        for(i = 0; i < a; i++){
            scanf("%d", &b[i]);
        }
        
        for(i = 0; i < a; i++){
            if(b[i] != 1){
                wins++;
            }
            
        }
        
        printf("%d\n", wins);
    }
    
    return 0;
}
