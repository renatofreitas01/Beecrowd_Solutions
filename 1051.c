/*********
Problem 1051
    Imposto de Renda
By Renato Freitas
**********/
#include <stdio.h>
#include <string.h>

int main()
{
    
    float a, valor;
    
    scanf("%f", &a);
    
    if(a >= 0){
        if(a >= 0 && a<=2000){
            printf("Isento\n");            
        } else if(a >= 2000.01 && a<=3000){
            valor = (a-2000)*0.08;
            printf("R$ %.2f\n", valor);
        } else if(a >= 3000.01 && a<=4500){
            valor = 1000*0.08 + (a-3000)*0.18;
            printf("R$ %.2f\n", valor);
        } else if(a > 4500){
            valor = 1000*0.08+1500*0.18+ (a-4500)*0.28;
            printf("R$ %.2f\n", valor);
        }
    }
    
    return 0;
}
