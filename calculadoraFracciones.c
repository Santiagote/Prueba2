/**
 * @file calculadoraFracciones.c
 * @author Santiago Jiménez 
 * @brief 
 * @version 0.1
 * @date 2024-01-30
 * 
 * @copyright Copyright (c) 2024
 * 
 */

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

struct Fraccion{
    int numerador, denominador;
};

struct Fracciones{
    struct Fraccion fraccion1;
    struct Fraccion fraccion2;
};

struct Fraccion sumar(struct Fracciones fraccion1, struct Fracciones fraccion2); 
struct Fraccion restar(struct Fracciones fraccion1, struct Fracciones fraccion2); 
struct Fraccion multiplicar(struct Fracciones fraccion1, struct Fracciones fraccion2); 
struct Fraccion dividir(struct Fracciones fraccion1, struct Fracciones fraccion2); 
void simplificarPorReferencia(struct Fraccion *fraccion);
float convertirPuntoFlotante(struct Fraccion fraccion);
struct Fraccion ingresarFraccion(char *mensaje);
char elegirOperacion();
struct Fraccion calcular(char operacion, struct Fracciones calculadora);

void presentarFraccion(struct Fraccion *fraccion);
void presentarResultado(char operacion, struct Fracciones calculadora, struct Fraccion rta);
//Joder que calorrrr, y yo aqui haciendo codigo como pendejo 
int main(int argc, char const *argv[]){
    system("@cls||clear");

    printf("Hola usuario, elija la operacion que desea realizar\n");
    printf("Suma(+)\nResta(-)\nMultiplicacion(x)\nDivision/)\n");
    printf("Eleccion: ");
    scanf("%c", &operacion);
    getchar();

    switch (operacion){
    case '+':
        printf("Ya veo has escogido la suma");
        break;
    case '-':
        printf("Ya veo has escogido la suma");
        break;
    case 'x':
        printf("Ya veo has escogido la suma");
        break;
    case '/':
        printf("Ya veo has escogido la suma");
        break;
        
    default:
        printf("Solo se permite ingresar los signos de las operaciones mencionadas, por favor ingrese un caracter aceptable");
        break;
    }
    return 0;
}


