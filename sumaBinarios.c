/**
 * @file sumaBinarios.c
 * @author Santiago Jiménez
 * @brief Realizar un programa que me permita sumar dos números binarios ingresados desde teclado. 
 * Utilizar programación modular (identificar y usar funciones con parámetros por valor y/o referencia) 
 * y estructura de datos estáticas (Arreglos Unidimensionales y/o Strings). 
 * Validar el ingreso de dígitos correspondiente al sistema numérico (binario).
 * @version 0.1
 * @date 2024-02-17
 * 
 * @copyright Copyright (c) 2024
 * 
 */

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<stdbool.h>

//Para declarar una variable de valor binario utilizamos mpz_t
struct Binarios{
    char num1[100]; 
    char num2[100]; 
};


void almacenarBinarios(struct Binarios valoresBinarios); 
int suma(struct Binarios valoresBinarios);
void mostrarResultado(int resultado);
bool esBinario(const char* cadena); 


int main(int argc, char const *argv[]){
    system("@cls||clear");
    struct Binarios valoresBinarios;

    almacenarBinarios(valoresBinarios);

    mostrarResultado(suma(valoresBinarios));
    return 0;
}

bool esBinario(const char* cadena){
    for (int i = 0; i < strlen(cadena); i++){
        if (cadena[i] != '0' && cadena[i] != '1'){
            return true; 
        }
        
    }
    return false;
}

void almacenarBinarios(struct Binarios valoresBinarios){
    printf("Usuario por favor coloque el primer valor binario\n");
    scanf("%s", &valoresBinarios.num1);
    getchar();

    if (esBinario(valoresBinarios.num1)){
        printf("El valor ingresado no es binario, ingrese un valor valido");
    }
    printf("Usuario por favor coloque el segundo valor binario\n");
    scanf("%s", &valoresBinarios.num2);
    getchar();

        if (esBinario(valoresBinarios.num1)){
            printf("El valor ingresado no es binario, ingrese un valor valido");
        }
}

int suma(struct Binarios valoresBinarios){
    int longitud = strlen(valoresBinarios.num1);
    int resultado = 0;
    int acarreo = 0;

    for (int i = longitud - 1; i >= 0; i--){
        int digito1 = valoresBinarios.num1[i] - '0';
        int digito2 = valoresBinarios.num2[i] - '0';

        int suma = digito1 + digito2 + acarreo;
        resultado |= ((suma%2) << (longitud - 1 - i));

        acarreo = suma/2;
    }

    if (acarreo > 0){
        resultado |= (1 << longitud);
    }
    
return resultado; 
}

void mostrarResultado(int resultado){
    printf("El resultado de la suma es %d \n", resultado);
}