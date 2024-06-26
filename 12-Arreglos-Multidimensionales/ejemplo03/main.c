/*!
 * @file   main.c
 * @brief  12. Arreglos Multidimensionales - 03. Inicialización de arreglos
 * multidimensionales (sin indicar largo)
 * @author Javier Balloffet <javier.balloffet@gmail.com>
 * @date   Sep 7, 2018
 */
#include <stdio.h>

int main(void)
{
    // Declaro un arreglo multidimensional (2D array) de enteros (int) de 2x3
    // elementos e inicializo el arreglo (no es necesario indicar la cantidad de
    // elementos de la primera dimension).
    int array2D[][3] = {{3, 24, -12}, {5, 0, 36}};

    // Imprimo el contenido del arreglo.
    printf("Valor de array[0][0] = %d\n", array2D[0][0]);
    printf("Valor de array[0][1] = %d\n", array2D[0][1]);
    printf("Valor de array[0][2] = %d\n", array2D[0][2]);
    printf("Valor de array[1][0] = %d\n", array2D[1][0]);
    printf("Valor de array[1][1] = %d\n", array2D[1][1]);
    printf("Valor de array[1][2] = %d\n", array2D[1][2]);

    // Imprimo el tamaño del arreglo (en bytes).
    printf("Tamanio del arreglo (en bytes) = %ld\n", sizeof(array2D));

    // Imprimo el tamaño del arreglo (en cantidad de elementos).
    printf("Tamanio del arreglo (en cantidad de elementos) = %ld\n",
           sizeof(array2D) / sizeof(int));

    return 0;
}
