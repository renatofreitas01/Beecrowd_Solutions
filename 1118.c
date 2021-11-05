#include <stdio.h>

int main() {

    float n1, n2, media;
    int verif, valid;

    do{
        valid = 0;
        do{
            scanf("%f", &n1);
            if(n1 > 10 || n1 < 0){
                printf("nota invalida\n");
            } else{
                valid++;
            }
        } while(valid == 0);

        valid = 0;

        do{
            scanf("%f", &n2);
            if(n2 > 10 || n2 < 0){
                printf("nota invalida\n");
            } else{
                valid++;
            }
        } while(valid == 0);

        media = (n1+n2)/2;

        printf("media = %.2f\n", media);

        do{
            printf("novo calculo (1-sim 2-nao)\n");
            scanf("%d", &verif);
        } while(verif != 1 && verif != 2);

    } while(verif != 2);

    return 0;
}