
/*Escreva um programa ou um algoritmo que receba 4 valores numéricos e os exiba em ordem crescente.*/


#include <stdio.h>
#include <stdlib.h>

int main ()
{

    int num [4];
    int i, j, n;

    for ( i = 0; i < 4; i++)
    {
        printf("insira um número qualquer: ");
        scanf("%i" ,&num[i]);
    }

    for (i = 0  ; i < 4; i++)
    {
        for (j = i +1; j < 4; j++)
        {
            if(num[i] > num [j])
            {
                n = num[i];
                num [i] = num[j];
                num[j] = n;
            }
        }
    }
    
    printf("Numeros de forma organizada!\n");
    for(i = 0 ; i < 4; i++)
    {
        printf("%i\n", num[i]);
    }
  
    
    return 0;
}
    
