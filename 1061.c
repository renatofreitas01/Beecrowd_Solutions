#include <stdio.h>

int main() {

    int diai, horai, minutoi, segundoi, diaf, horaf, minutof, segundof;
    int dias, horas, minutos, segundos;
    int somai, somaf, somas;
    char a[50];
    
    scanf("%s %d", &a, &diai);
    scanf("%d %s %d %s %d", &horai, &a, &minutoi, &a, &segundoi);
    scanf("%s %d", &a, &diaf);
    scanf("%d %s %d %s %d", &horaf, &a, &minutof, &a, &segundof);
    
    somai = ((diai*24 + horai)*60 + minutoi)*60+segundoi;
    somaf = ((diaf*24+horaf)*60+minutof)*60+segundof;
    somas = somaf - somai;
    
    dias = somas/60/60/24;
    horas = (somas)/60/60 - dias*24;
    minutos = (somas)/60 - dias*24*60 - horas*60;
    segundos = somas - dias*24*60*60 - horas*60*60 - minutos*60;
    
    
    
    printf("%d dia(s)\n%d hora(s)\n%d minuto(s)\n%d segundo(s)\n", dias, horas, minutos, segundos);
    
    return 0;
}