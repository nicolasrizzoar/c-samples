/*!
 * @file   main.c
 * @brief  27. System calls de Entrada y Salida - 01. Escribiendo un archivo
 *   usando system calls
 * @author Javier Balloffet <javier.balloffet@gmail.com>
 * @date   Dec 29, 2022
 */
#include <fcntl.h>
#include <stdio.h>
#include <string.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <unistd.h>

int main(void)
{
    // Declaro un entero para almacenar el descriptor del archivo.
    int fd;
    char message[] = "Escribiendo un archivo usando system calls!\n";

    // Abro el archivo en modo sólo escritura. Si no existe, el mismo es creado.
    fd = open("archivo.txt", O_WRONLY | O_CREAT);

    // Chequeo si hubo un error al abrir el archivo.
    if (fd == -1)
    {
        printf("Error abriendo el archivo!\n");
        return -1;
    }

    // Escribo el archivo.
    write(fd, message, strlen(message));

    // Cierro el archivo.
    close(fd);

    return 0;
}
