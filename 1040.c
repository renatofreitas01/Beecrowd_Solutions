#include <stdio.h>
#include <math.h> 
 
int main() {
 
    float n1, n2, n3, n4, n5, media;
    
    scanf("%f %f %f %f", &n1, &n2, &n3, &n4);
    
    media = (2*n1 + 3*n2 + 4*n3 + n4)/10;
    
    if(media >= 7){
        printf("Media: %.1f\nAluno aprovado.\n", media);
    } else if(media < 5){
        printf("Media: %.1f\nAluno reprovado.\n", media);
    } else{
        //exame
        scanf("%f", &n5);
        printf("Media: %.1f\nAluno em exame.\n", media);
        printf("Nota do exame: %.1f\n", n5);
        
        media = (media+n5)/2;
        
        if(media >= 5){
            printf("Aluno aprovado.\n");
        } else{
            printf("Aluno reprovado.\n");
        }
        printf("Media final: %.1f\n", media);
    }
    
    return 0;
}