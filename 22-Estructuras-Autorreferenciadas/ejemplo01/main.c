/*!
 * @file   main.c
 * @brief  22. Estructuras Autorreferenciadas - 01. Definición y declaración de
 *   estructuras autorreferenciadas
 * @author Javier Balloffet <javier.balloffet@gmail.com>
 * @date   Dic 28, 2022
 */
#include <stdio.h>

// Defino un tipo de datos estructura llamado "struct Node" la cual incluye un
// puntero a dicho tipo.
struct Node
{
    int data;
    struct Node* pointer;
};

int main(void)
{
    // Declaro una variable de tipo "struct Node".
    struct Node node;

    // Cargo los datos del nodo (asignando la propia dirección del nodo al
    // puntero incluído).
    node.data = 1;
    node.pointer = &node;

    // Imprimo los datos del nodo.
    printf("Dato almacenado en el nodo: %d\n", node.data);
    printf("Direccion almacenada en el nodo: %p\n", node.pointer);
    printf("Direccion del nodo: %p\n", &node);

    return 0;
}
