#include <stdio.h>
 
int main() {
    
    int i, d;
    double a[3], aux;
    
    for(i = 0; i < 3; i++){
        scanf("%lf", &a[i]);
    }
    
    if(a[0] > 0 && a[1] > 0 && a[2] > 0){
        
        for(d = 0; d < 3; d++){
            for(i = 0; i < 2; i++){
                if(a[i] < a[i+1]){
                    aux = a[i];
                    a[i] = a[i+1];
                    a[i+1] = aux;
                }
            }
        }
        
        if(a[0] >= a[1] + a[2]){
            printf("NAO FORMA TRIANGULO\n");
            return 0;
        } else if(a[0]*a[0] == a[1]*a[1] + a[2]*a[2]){
            printf("TRIANGULO RETANGULO\n");
        } else if(a[0]*a[0] > a[1]*a[1] + a[2]*a[2]){
            printf("TRIANGULO OBTUSANGULO\n");
        } else if(a[0]*a[0] < a[1]*a[1] + a[2]*a[2]){
            printf("TRIANGULO ACUTANGULO\n");
        }
        
        if(a[0] == a[1] && a[1] == a[2]){
            printf("TRIANGULO EQUILATERO\n");
        } else if(a[0] == a[1] || a[0] == a[2] || a[1] == a[2]){
            printf("TRIANGULO ISOSCELES\n");
        }
        
         
    }
    
    return 0;
}