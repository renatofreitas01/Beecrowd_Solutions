#include <stdio.h>

int main(){

    int grem = 0, inter = 0, empate = 0, n1, n2, verif;

    do{

        scanf("%d %d", &n1, &n2);

        if(n1 == n2){
            empate++;
        } else if(n1>n2){
            inter++;
        } else{
            grem++;
        }

        do{
            printf("Novo grenal (1-sim 2-nao)\n");
            scanf("%d", &verif);
        } while(verif != 2 && verif != 1);

    }while (verif != 2);

    printf("%d grenais\nInter:%d\nGremio:%d\nEmpates:%d\n", empate+inter+grem, inter, grem, empate);

    if(inter>grem){
        printf("Inter venceu mais\n");
    } else if(grem > inter){
        printf("Gremio venceu mais\n");
    } else{
        printf("Nao houve vencedor\n");
    }


    return 0;
}