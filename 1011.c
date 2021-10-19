/*********
Problem 1011
    Esfera
By Renato Freitas
**********/
#include <stdio.h>
 
int main() {
    
    double a, volume;
    
    scanf("%lf", &a);
    
    volume = 3.14159*(4.0/3)*(a*a*a);
    
    printf("VOLUME = %.3lf\n", volume);

    return 0;
}