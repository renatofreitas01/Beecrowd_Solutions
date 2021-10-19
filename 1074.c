/*********
Problem 1074
    Par ou Ímpar
By Renato Freitas
**********/
#include <stdio.h>
 
int main() {
 
    int a;
    scanf("%d", &a);
    
    if(a < 10000){
        int i, b[a];
        
        for(i = 0; i < a; i++){
            scanf("%d", &b[i]);
        }
        
        for(i = 0; i < a; i++){
            if(b[i] == 0){
                printf("NULL\n");
            } else if(b[i]%2 == 0){
                printf("EVEN ");
            } else{
                printf("ODD ");
            }
            
            if(b[i] == 0){
                continue;
            } else if(b[i] > 0){
                printf("POSITIVE\n");
            } else {
                printf("NEGATIVE\n");
            }
        }
        
    }
    
    return 0;
}
