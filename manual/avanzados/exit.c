#include <stdio.h>
#include <stdlib.h>

void comprobar_paridad(){

   int useless;

   useless = 1; /* Por ejemplo */

   if (useless % 2)
	   exit(-1); /* Podemos salir desde cualquier
		      * sitio con exit, incluso desde una
		      * funcion */

}
int main(){

   comprobar_paridad();
   return 0; /* Podemos salir con un return desde main también */
   exit(0); /* Esto seria equivalente :) */
}
