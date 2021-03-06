/*
 * Funciones.c
 *
 *  Created on: 25 sep. 2021
 *      Author: Santiago
 */

#include <stdio.h>
#include <stdlib.h>

int suma(int a, int b)
{
    return a + b;
}

int resta(int a, int b)
{
    return a - b;
}

int multiplicacion(int a, int b)
{
    return a * b;
}

float division(int a, int b)
{
    return (float)a / b;
}

int factorial(int a)
{
    int acumuladorResultado = 1;
    for(int i = a; i >= 1; i--)
    {
        acumuladorResultado *= i;
    }

    return acumuladorResultado;
}

int menu(int operacion, int a, int b)
{

    switch(operacion)
    {
    case 1:
        return suma(a,b);
    break;

    case 2:
        return resta(a,b);
    break;

    case 3:
        return multiplicacion(a,b);
    break;

    case 4:
        return division(a,b);
    break;

    case 5:
        return factorial(a);
    break;

    case 6:
        return 0;
    break;

    default:
        printf("Opcion invalida\n");
    break;
    }

    system("pause");

    return operacion;
}
