/*********
Problem 1015
    Distância Entre Dois Pontos
By Renato Freitas
**********/
#include <stdio.h>
#include <math.h>
 
int main() {
    
    float x, y, a ,b, resultado;
    
    scanf("%f %f %f %f",&x ,&y,&a ,&b);
    
    resultado = sqrt(pow((a-x),2)+pow((b-y),2));
    
    printf("%.4f\n", resultado);
    return 0;
}