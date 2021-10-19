/*********
Problem 1042
    Sort Simples
By Renato Freitas
**********/
#include <stdio.h>
 
int main() {
 
    int a[3], b[3], i ,d;
    
    for(i = 0; i < 3; i++){
        scanf("%d", &a[i]);
        b[i] = a[i];
    }
    
    //bubble sort
    for(d = 0; d < 2; d++){
        for(i = 0; i < 2; i++){
            if(a[i] < a[i+1]){
                
            } else{
                int aux = a[i];
                a[i] = a[i+1];
                a[i+1] = aux;
            }
        }
    }
    
    for(i = 0; i < 3; i++){
        printf("%d\n",a[i]);
    }
    
    printf("\n");
    
    for(i = 0; i < 3; i++){
        printf("%d\n",b[i]);
    }
    return 0;
}