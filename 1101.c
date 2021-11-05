#include <stdio.h>

int main() {

    int m[100], n[100], i, aux, cont, soma[100];

    cont = -1;
    do{
        cont++;
        scanf("%d %d", &m[cont], &n[cont]);
    } while(m[cont] > 0 && n[cont] > 0);

    for(i = 0; i < cont; i++){
        if(m[i] > n[i]){
            aux = m[i];
            m[i] = n[i];
            n[i] = aux;
        }
    }

    for(i = 0; i < cont; i++){
        soma[i] = 0;
        for(aux = m[i]; aux <= n[i]; aux++){
            printf("%d ", aux);
            soma[i] = soma[i] + aux;
        }
        printf("Sum=%d\n", soma[i]);
    }


    return 0;
}