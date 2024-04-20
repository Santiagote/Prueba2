/**
 * @file Potencia.c
 * @author Santiago Jiménez
 * @brief 
 * @version 0.1
 * @date 2024-01-10
 * 
 * @copyright Copyright (c) 2024
 * 
 */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    system("@cls||clear");

    int base, exponente;
    float potencia = 1.0;

    printf("Ingrese la base:\n");
    scanf("%i", &base);
    printf("Ingrese el exponente:\n");
    scanf("%i", &exponente);
    getchar();

    if (exponente < 0)
    {
        exponente = exponente * (-1);
        for (int i = 1; i <= exponente; i++)
        {potencia = potencia * base;}
        printf("La potencia es: 1/%.2f", potencia);
    }else
    {
        for (int i = 1; i <= exponente; i++)
        {potencia = potencia * base;}
        printf("La potencia es: %.2f", potencia);
    }

    return 0;
}