/*!
 * @file   main.c
 * @brief  20. Campos de Bits - 01. Definición y declaración de campos de bits
 * @author Javier Balloffet <javier.balloffet@gmail.com>
 * @date   Sep 17, 2022
 */
#include <stdio.h>

// Defino un tipo de datos estructura llamado "struct Date".
struct Date
{
    int day : 5;
    int month : 4;
    int year;
};

int main(void)
{
    // Declaro una variable de tipo "struct Date".
    struct Date date;

    // Cargo una fecha.
    date.day = 1;
    date.month = 1;
    date.year = 1970;

    // Imprimo el tamaño del campo de bits.
    printf("Una variable struct Date tiene %ld bytes de largo\n",
           sizeof(struct Date));

    // Imprimo la fecha.
    printf("Dia: %d\n", date.day);
    printf("Mes: %d\n", date.month);
    printf("Anio: %d\n", date.year);

    return 0;
}
