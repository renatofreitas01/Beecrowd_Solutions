#include <stdio.h>
 
int main() {
 
    int a[3], i, j, aux;
    
    for(i = 0; i < 3 ; i ++){
        scanf("%d", &a[i]);
    }
    
    for(j = 0; j < 3 ; j ++){
        for(i = 0; i < 2 ; i ++){
            if(a[i] < a[i+1]){
                aux = a[i];
                a[i] = a[i+1];
                a[i+1] = a[i];
            }
        }    
    }
    
    printf("%d eh o maior\n", a[0]);
 
    return 0;
}