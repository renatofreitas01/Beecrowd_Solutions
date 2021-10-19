/*********
Problem 1070
    Seis Números Ímpares
By Renato Freitas
**********/
#include <stdio.h>

int main() {
    
    int a, i;
    
    scanf("%d", &a);
    
    for(i=a; i<a+12; i++){
        if(i%2 != 0){
            printf("%d\n",i);
        }
    }
    
    return 0;
}