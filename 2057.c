/*********
Problem 2057
    Fuso Horário
By Renato Freitas
**********/
#include <stdio.h>

int main() {

    int s, t, f;
    int sum = 0;

    scanf("%d %d %d", &s, &t, &f);
    if (s >= 0 && s <= 23 && t >= 1 && t <= 12 && f >= -5 && f <= 5){
        sum = s+t+f;
        if(sum == 24){
            printf("0\n");
        } else if (sum > 24){
            printf("%d\n", sum - 24);
        } else if(sum < 0){
            printf("%d\n", sum + 24);
        } else{
            printf("%d\n", sum);
        }

    }
    return 0;
}