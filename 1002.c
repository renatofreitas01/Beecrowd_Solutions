/*********
Problem 1002
    Área do Círculo
By Renato Freitas
**********/
#include <stdio.h>

int main() {
 
    double r,area;
    
    scanf("%lf",&r);
    
    area=3.14159*r*r;
    
    printf("A=%.4lf\n",area);

    return 0;
}