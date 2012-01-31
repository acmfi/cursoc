/* Ejemplo de código automodificable */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int main(){
     char *memoria;
     int (*pfuncion)();

     memoria = (char*)malloc(100); /* Pedimos memoria */
     memoria[0] = 0x55;
     memoria[1] = 0x89;
     memoria[2] = 0xE5; 
     memoria[3] = 0xB8; // mov eax <= 0x10 valor de retorno 
     memoria[4] = 0x10; // 0x10
     memoria[5] = 0x00; 
     memoria[6] = 0x00; 
     memoria[7] = 0x00;
     memoria[8] = 0x5D; // ret
     memoria[9] = 0xC3;

     pfuncion=(int (*)())memoria; // un cast feliz!
     printf("La funcion devuelve: %X\n",pfuncion());

     memoria[4] = 0x20;
     printf("La funcion devuelve: %X\n",pfuncion());

     printf("Ahora un segfault para divertirnos un rato!Dadme un segundo\n");
     sleep (1);
     memoria[0]= 0x00;
     memoria[1]= 0x00;
     memoria[2]= 0x00;
     memoria[3]= 0x00;

     printf("La funcion devuelve: %X\n",pfuncion());
}
