#include <stdlib.h>
#include <stdio.h>

int main(){

   pid_t pid_hijo; /* Identificador del 
		    * proceso que crearemos */

   pid_hijo = fork(); /* Creamos un proceso hijo, 
		       * que es copia del padre */

   switch(pid_hijo){
      case -1: printf("Error en fork :(\n");
               break; /* Si no ponemos el break no sale del switch 
                       * y ejecutaria el codigo de abajo */
	       
      case 0: printf("Soy el proceso hijo. !HOLA!\n");
              break;

      default: printf("Soy el proceso padre, el hijo que he 
                       creado es %d\n",pid_hijo);
               break;
   }

   return 0; /* Tanto el padre como el hijo
	      * devuelven 0 como valor de retorno */
}
