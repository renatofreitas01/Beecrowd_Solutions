#include <stdio.h>
 
int main() {
 
    int a, i;
    
    scanf("%d", &a);
    
    if(a > 5 && a < 2000){
     
        for(i = 2; i <= a; i++){
            if(i%2 == 0){
                printf("%d^2 = %d\n", i, i*i);        
            }
        }
    }
    
    return 0;
}
