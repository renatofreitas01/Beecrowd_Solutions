/*********
Problem 1933
    Tri-du
By Renato Freitas
**********/
#include <stdio.h>
 
int main() {
 
    int c1, c2;
    
    scanf("%d %d", &c1, &c2);
    
    if(c1 > c2){
        c2 = c1;
    }
    
    printf("%d\n", c2);
 
    return 0;
}