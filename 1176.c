/*********
Problem 1176
    Fibonacci em Vetor
By Renato Freitas
**********/
#include <stdio.h>
 
int main() {
 
    int t, i, j;
    
    scanf("%d", &t);
    
    long long int fib, a, b;
    int n;
    
    for(i = 0; i < t; i++, a = 0, b = 1){
        scanf("%d", &n);
            if(n == 0){
                fib = 0;
            } else if(n == 1){
                fib = 1;
            } else{
                for(j = 0; j < n-1; j++){
                fib = a+b;
                a = b;
                b = fib;
                }
            }
            printf("Fib(%d) = %lld\n", n, fib);
            
    }
    return 0;
}