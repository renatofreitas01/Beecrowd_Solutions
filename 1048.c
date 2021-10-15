#include <stdio.h>
int main()
{
    float a, reajuste, nv;
    int pc;
    
    scanf("%f", &a);
    
    if(a >=0 && a <= 400){
        pc = 15;
        reajuste = a*0.15;
        nv = a + reajuste;
    } else if(a >=400.01 && a <= 800){
        pc = 12;
        reajuste = a*0.12;
        nv = a + reajuste;
    }else if(a >=800.01 && a <= 1200){
        pc = 10;
        reajuste = a*0.10;
        nv = a + reajuste;
    }else if(a >=1200.01 && a <= 2000){
        pc = 7;
        reajuste = a*0.07;
        nv = a + reajuste;
    }else if(a >2000){
        pc = 4;
        reajuste = a*0.04;
        nv = a + reajuste;
    }
    
    printf("Novo salario: %.2f\n", nv);
    printf("Reajuste ganho: %.2f\n", reajuste);
    printf("Em percentual: %d %\n",pc);
    
    return 0;
}
