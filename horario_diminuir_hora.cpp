/*Escreva um programa ou um algoritmo que receba um valor referente a uma hora no formato HH:MM:SS, caso o valor não esteja no intervalo 00 até as 24 informar que não é uma hora válida, caso esteja no intervalo calcular e informar quanto tempo (no formato HH:MM:SS também) falta para as 12 horas ou passa das 12 horas. 

Você pode dar o input da hora da forma que achar melhor (hora, minuto e segundo separados ou num string único, exemplo: “03:45:51”).I*/



#include <stdio.h>
#include <stdlib.h>

int main ()
{

    int hora =0;
    int min =0;
    int seg = 0;

    int hora_rest = 12;
    int min_rest = 60;
    int seg_rest = 60;

    printf("Insira a hora ");
    scanf("%i", &hora);
    fflush(stdin);


     while (hora < 0 && hora > 24)
    {
        printf("Hora inválida!\nInsira a hora entre 0 e 24: ");
        scanf("%i", &hora);
    }

    printf("Insira os minutos ");
    scanf("%i", &min);
    fflush(stdin);

    printf("Insira os segundos ");
    scanf("%i", &seg);
    fflush(stdin);

    hora_rest = hora_rest - hora;
    min_rest = min_rest - min;
    seg_rest = seg_rest -seg;

    if (hora_rest < 0)
    {
        hora_rest = hora_rest * -1;
    }

    if (hora >= 12)
    {
        printf("Passam das 12H exatamente --[ %i:%i:%i ]", hora_rest, min_rest, seg_rest);
    }
    else
    {
        printf("Faltam para as 12h --[ %i:%i:%i ]", hora_rest, min_rest, seg_rest);
    }
    
    return 0;
    
}
