#include <stdio.h>
 
int main() {
 
    int a, k, soma = 0, i, j, aux;
    
    scanf("%d %d", &a, &k);
    
    if(a >= 1 && a <= 1000 && k >=1 && k <= a){
        
        int p[a];
        
        for(i = 0; i < a; i++){
            scanf("%d", &p[i]);
        }
        
        for(i = 0; i < a; i++){
            for(j = 0; j < a-1; j++){
                if(p[j] < p[j+1]){
                    aux = p[j];
                    p[j] = p[j+1];
                    p[j+1] = aux;
                }
            }
        }
        
        for (i = 0; i < k; i++){
            soma++;
        }
        for(j = k; j < a; j++){
            if(p[k-1] == p[j]){
                soma++;
            }
        }
        
        printf("%d\n", soma);
    }
    
    return 0;
}
