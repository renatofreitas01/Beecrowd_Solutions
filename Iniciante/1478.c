/*********
Problem 1478
    Matriz Quadrada II
By Renato Freitas
**********/
#include <stdio.h>

int main() {

    int n, i, j, num;
    do {
        scanf("%d", &n);
        if (n == 0) {
            return 0;
        }

        for (i = 0; i < n; i++) {
            num = i + 1;
            for (j = 0; j < n; j++) {
                if(j == n-1){
                    printf("%3d\n", num);
                } else{
                    printf("%3d ", num);
                }
                if(i == j){
                    num = 1;
                    num++;
                } else if(i > j){
                    num--;
                } else{
                    num++;
                }
            }
        }


        printf("\n");
    } while (n != 0);
}