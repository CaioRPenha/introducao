#include<iostream>
#include <stdio.h>

int main(){
    int media;
    media = 0;
    while (media <= 10)
    {
        if (media < 5)
        { 
            printf("reprovado.nota= %d ", media );
        }
        else if(media >= 5 && media < 7)
        { 
            printf("recuperação.nota= %d ", media );
        }
        else if(media >= 7)
        {
            printf("aprovado.nota= %d ", media );
        }
        media++;
    }
}   