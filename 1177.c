/*********
Problem 1177
    Preenchimento de Vetor II
By Renato Freitas
**********/
#include <stdio.h>

int main()
{
    int n, i, j;
    
    scanf("%d", &n);
    
    for(i = 0; i < 1000;){
        for(j = 0; j < n; j++){
            printf("N[%d] = %d\n", i, j);
            if(i == 999){
                return 0;
            }
            i++;
        }
    }
    return 0;
}
