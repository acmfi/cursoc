#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <signal.h>

int main(){

   pid_t pid_hijo;
   pid_t pid_devuelto;
   char *nombre = "sleep"; /* Nombre del programa a ejecutar por el hijo */
   char *mod = "10";  /* Preparamos los modificadores a usar */
   char *params[3]; /* y el "contenedor" de los parametros */

   pid_hijo = fork(); /* Creamos un hijo */

   switch(pid_hijo){
      case -1: printf("Error en fork :(\n");
               break;
      case 0: params[0]=nombre;
              params[1]=mod;
              params[2]=NULL;
              execvp (nombre,params); /* el hijo duerme 10 segundos 
	                               * (ejecuta sleep 10) */
              exit(-1); /* exec solo llega aqui si se produce un error,
                         * por lo que devolvemos un codigo de que algo
                         * ha ido mal */
   default:pid_devuelto = wait(); /* Esperamos un poco */
	   if (pid_devuelto != pid_hijo)
               kill(pid_hijo, SIGKILL); /* Mandamos al hijo una 
					  * señal de que muera
                                          * (tarda demasiado ;) */
           break;
   }
      return 0;
}

