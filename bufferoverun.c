#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define TAMANIO_BUFFER 10

char buffer[TAMANIO_BUFFER] = "mensaje";
char clave[TAMANIO_BUFFER] = "passw0rd";

int main (int argc, char **argv) {
  
  if (argc != 3) {
    printf("\nUso: %s <clave> <mensaje a imprimir>\n", argv[0]);
    exit(1);
  }

  strcpy(buffer, argv[2]);
  if (strcmp(argv[1], clave) == 0) {
    printf("La clave coincide, ");
    printf(" Mensaje: %s\n", buffer);
  }
  else {
    printf("Contraseña incorrecta!\n");
  }
  
}

