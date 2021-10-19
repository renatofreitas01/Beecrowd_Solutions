/*********
Problem 1036
    Fórmula de Bhaskara
By Renato Freitas
**********/
#include <stdio.h>
#include <math.h> 
 
int main() {
 
    double a, b, c;
    float r1, r2, delta;
    
    scanf("%lf %lf %lf", &a , &b ,&c);
    
    delta = b*b-4*a*c;
    if(delta <= 0 || a == 0){
        printf("Impossivel calcular\n");
    } else{
        r1 = (-b + sqrt(delta)) / (2*a);
        r2 = (-b - sqrt(delta)) / (2*a);
    
        printf("R1 = %.5f\nR2 = %.5f\n", r1, r2);
    }

    return 0;
}