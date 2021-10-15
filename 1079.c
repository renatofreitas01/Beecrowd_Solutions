#include <stdio.h>
 
int main() {
 
    int a, i, j;
    
    scanf("%d", &a);
    
    float b[a][3], soma[a];
    
    for(i = 0; i < a; i++){
        soma[i] = 0;
        for(j = 0; j < 3; j++){
            scanf("%f", &b[i][j]);
            switch(j){
                case 0:
                    soma[i] = soma[i] + b[i][0]*2;
                    break;
                case 1:
                    soma[i] = soma[i] + b[i][1]*3;
                    break;
                case 2:
                    soma[i] = soma[i] + b[i][2]*5;
                    break;
            }
        }
    }
    for(i = 0; i < a; i++){
        printf("%.1f\n", soma[i]/10);
    }
    
    return 0;
}
