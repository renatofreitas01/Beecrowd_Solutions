#include <stdio.h>

int main() {
    
    int a[5], i, cont=0;
    
    for(i = 0; i < 5; i++){
        scanf("%d", &a[i]);
    }
    for(i = 0; i < 5; i++){
        if(a[i]%2 == 0){
            cont++;
        }
    }
    
    printf("%d valores pares\n", cont);
    
    return 0;
}