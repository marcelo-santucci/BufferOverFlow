# BufferOverFlow

Este repositorio contiene 2 programas que nos sirven para ilustrar el funcionamiento de un "Buffer Overflow", se te sugiere crees un folder dentro del home del usuario con el que estas firmado dentro del sistema operativo y allí copies los archivos.

  1. bufferoverun.c
  2. CambioValor.c

* Compilación

  Para compilar cualquiera de los dos programas emplea la sintaxis siguiente:

    <-gcc> <nombre_archivo_fuente.c> -o <nombre_archivo_fuente>   donde "<" y ">" son únicamente marcadores y no forman parte del comando.

* Ejecución

  Para ejecutar cualquiera de los dos programas que ya son ejecutables únicamente debes anteponer los caracteres ./ al nombre del ejecutable

  Para determinar que archivo es el ejecutable puedes ejecutar el comando "ls -ltrh".  Dicho comando listará los archivos dentro del directorio donde estas trabajando mostrando varias de sus propiedades incluyendo sus permisos, aquellos que esten acompañados de "-rwxr-xr-x" serán ejecutables.

* Formato Unicodeescape para hexadecimal

  Considera que tienes el número en Hexadecimal "E5E0" su representación en formato Unicodeescape es "\xE5\xE0"

* Python generacion de cadenas de caracteres de relleno que vayan acompañadas de valores Hexadecimales en formato Unicodeescape, puedes emplear el comando siguiente:

    python3 -c "print ('A'*5 + '\xE5\xE0')"

    Donde 'A'*5 genera una cadena de 5 letras AAAAA y le añade el numero hexadecimal en el formato Unicodeescape que es requerido por el programa

  Para el caso del programa CambioValor se te sugiere que emplees el comando de python para poder resolver el problema que se te plantea en la definición del ejercicio. 
