/*!
 * @file   main.c
 * @brief  19. Uniones - 01. Definición y declaración de uniones
 * @author Javier Balloffet <javier.balloffet@gmail.com>
 * @date   Sep 16, 2022
 */
#include <stdio.h>

// Defino un tipo de datos union llamado "union Number".
union Number
{
    int x;
    int y;
};

int main(void)
{
    // Declaro una variable de tipo "union Number".
    union Number number;

    // Asigno 2 al campo X.
    number.x = 2;
    printf("Campo X: %d\n", number.x);
    printf("Campo Y: %d\n", number.y);

    // Asigno 5 al campo Y.
    number.y = 5;
    printf("Campo X: %d\n", number.x);
    printf("Campo Y: %d\n", number.y);

    return 0;
}
