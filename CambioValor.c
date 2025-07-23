/*
 *
 * El objetivo de este programa es que usted logre cambiar el valor de una variable por 0x496c5962
 *
 */

#include <err.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

#define SALUDO "¡Bienvenido al programa de cambio de valor!"

int main(int argc, char **argv) {
  struct {
    char buffer[64];
    volatile int cambiame;
  } miEstructura;

  printf("%s\n", SALUDO);

  if (argc < 2) {
    errx(1, "Debes pasar un argumento al programa, el cual será copiado en la variable \"buffer\"\n");
  }

  miEstructura.cambiame = 0;
  strcpy(miEstructura.buffer, argv[1]);

  if (miEstructura.cambiame == 0x496c5962) {
    puts("¡Bien hecho, has conseguido cambiar el valor de la variable cambiame por el valor solicitado! \n");
  } else {
    printf("¡Casi lo consigues!, pero la variable cambiame tiene un valor similar a 0x%08x, pero necesitamos que sea 0x496c5962\n", miEstructura.cambiame);
  }

  exit(0);
}
