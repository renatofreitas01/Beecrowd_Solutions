#include <stdio.h>
 
int main() {
 
    int a, i;
    int soma = 0;
    int cont = 0;
    
    scanf("%d", &a);
    
    if(a >= 2 && a <= 10000){
        int b[a];
        for(i = 0; i < a; i++){
            scanf("%d", &b[i]);
            soma = soma + b[i];
            if(soma > 100000){
                return 0;
            }
        }
        
        for(i = 1; i < a; i++){
            if(b[0] < b[i]){
                cont++;
            }
        }   
        
        if(cont == 0){
            printf("S\n");
        } else{
            printf("N\n");
        }
        
        
    }
    
    return 0;
}
