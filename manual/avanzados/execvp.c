#include <stdio.h>
#include <stdlib.h>

int main(){

   pid_t pid_hijo;
   char *nombre = "ls"; /* Nombre del programa a ejecutar por el hijo */
   char *mod = "-la";  /* Preparamos los modificadores a usar */
   char *params[3]; /* y el "contenedor" de los parametros */

   pid_hijo = fork(); /* Creamos un hijo */
   
   switch(pid_hijo){
      case -1: printf("Error en fork :(\n");
  	       break;
      case 0: params[0]=nombre;
              params[1]=mod;
              params[2]=NULL;
              execvp (nombre,params); /* ahora el hijo es un ls -la :) */
              exit(-1); /* exec solo llega aqui si se produce un error,
	                 * por lo que devolvemos un codigo de que algo
	                 * ha ido mal */
      default: waitpid(pid_hijo,NULL); /* esperamos a que el hijo acabe */
               break;
   }
   return 0;
}

