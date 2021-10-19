/*********
Problem 1049
    Animal
By Renato Freitas
**********/
#include <stdio.h>
#include <string.h>

int main()
{
    char a[20], b[20], c[20];
    
    gets(a);
    gets(b);
    gets(c);
    
    char d = a[0];
    char e = b[0];
    char f = c[2];
    
    switch(d){
        case 'v':
            switch(e){
                case 'a':
                    switch(f){
                        case 'r':
                            printf("aguia\n");
                            break;
                        case 'i':
                            printf("pomba\n");
                            break;
                    }
                    break;
                case 'm':
                    switch(f){
                        case 'i':
                            printf("homem\n");
                            break;
                        case 'r':
                            printf("vaca\n");
                            break;
                    }
                    break;
            }
            break;
        case 'i':
            switch(e){
                case 'i':
                    switch(f){
                        case 'm':
                            printf("pulga\n");
                            break;
                        case 'r':
                            printf("lagarta\n");
                            break;
                    }
                    break;
                case 'a':
                    switch(f){
                        case 'm':
                            printf("sanguessuga\n");
                            break;
                        case 'i':
                            printf("minhoca\n");
                            break;
                    }
                    break;
            }
            break;
            
    }
    
    
    return 0;
}
