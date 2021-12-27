/*********
Problem 1067
    Números Ímpares
By Renato Freitas
**********/
#include <stdio.h>

int main() {
    
    int a, i;
    
    scanf("%d", &a);
    
    if(a>=1 && a<= 1000){
        
        for(i=0; i<a+1; i++){
            if(i%2 != 0){
                printf("%d\n",i);
            }
        }
    }
    
    return 0;
}