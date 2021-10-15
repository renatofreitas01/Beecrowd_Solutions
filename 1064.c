#include <stdio.h>

int main() {
    
    float a[6], b[6], total=0;
    int i, cont = 0;
    
    for(i = 0; i < 6; i++){
        scanf("%f", &a[i]);
    }
    
    for(i = 0; i < 6; i++){
        if(a[i] > 0){
            b[cont] = a[i];
            cont++;
        }
    }
    for(i = cont; i >= 0; i--){
        total = total + b[i];
    }
    
    printf("%d valores positivos\n", cont);
    printf("%.1f\n", total/cont);
    
   
    return 0;
}