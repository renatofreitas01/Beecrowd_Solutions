/*********
Problem 1020
    Idade em Dias
By Renato Freitas
**********/
#include <stdio.h>
#include <stdlib.h>

int main(){

   int a, anos, meses, dias;

   scanf("%d", &a);
   
   anos = a / 365;
   meses = (a - (anos*365))/30;
   dias = a - (anos*365) - (meses*30);
   
   printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n", anos, meses, dias);
   
   return 0; 

}