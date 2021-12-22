/*********
Problem 3053
    Jogo Dos Copos
By Renato Freitas
**********/
#include <stdio.h>

int main() {

    int n, i, mov;
    char l[4];
    char str[50];

    l[0] = 'A';
    l[1] = 'B';
    l[2] = 'C';


    scanf("%d", &n);
    scanf("%s", str);


    for (i = 0; i < n; i++) {
        scanf("%d", &mov);
        switch (mov) {
            case 1:
                l[3] = l[0];
                l[0] = l[1];
                l[1] = l[3];
                break;
            case 2:
                l[3] = l[1];
                l[1] = l[2];
                l[2] = l[3];
                break;
            case 3:
                l[3] = l[2];
                l[2] = l[0];
                l[0] = l[3];
                break;
        }
    }

    if(str[0] == l[0]){
        l[0] = 'A';
        printf("%c\n", l[0]);
    } else if(str[0] == l[1]){
        l[1] = 'B';
        printf("%c\n", l[1]);
    } else if(str[0] == l[2]){
        l[2] = 'C';
        printf("%c\n", l[2]);
    }

    return 0;
}