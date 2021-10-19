/*********
Problem 1018
    Cédulas
By Renato Freitas
**********/
#include <stdio.h>

int main() {
    
    int a, n[7];
    
    scanf("%d", &a);
    
    if(0<a && a<1000000){
        
        n[0] = a/100;
        n[1] = (a-(n[0]*100))/50;
        n[2] = (a-(n[0]*100)-(n[1]*50))/20;
        n[3] = (a-(n[0]*100)-(n[1]*50)-(n[2]*20))/10;
        n[4] = (a-(n[0]*100)-(n[1]*50)-(n[2]*20)-(n[3]*10))/5;
        n[5] = (a-(n[0]*100)-(n[1]*50)-(n[2]*20)-(n[3]*10)-(n[4]*5))/2;
        n[6] = a-(n[0]*100)-(n[1]*50)-(n[2]*20)-(n[3]*10)-(n[4]*5)-(n[5]*2);
        
        
        printf("%d\n", a);
        printf("%d nota(s) de R$ 100,00\n", n[0]);
        printf("%d nota(s) de R$ 50,00\n", n[1]);
        printf("%d nota(s) de R$ 20,00\n", n[2]);
        printf("%d nota(s) de R$ 10,00\n", n[3]);
        printf("%d nota(s) de R$ 5,00\n", n[4]);
        printf("%d nota(s) de R$ 2,00\n", n[5]);
        printf("%d nota(s) de R$ 1,00\n", n[6]);
    }
    
    return 0;
}