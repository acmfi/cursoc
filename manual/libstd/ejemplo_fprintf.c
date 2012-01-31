#include <stdio.h>

int main(void) {
	FILE *flujo  ;
	char *buffer = " Esto es un ejemplo sencillo.";
	int nescritos;
             
	/* abre el   fichero */
	flujo = fopen ("datos.txt","a");
	if (flujo == NULL)
	{            
		fprintf( stderr,"Error: el fichero no se ha podido abrir\n");
	}            
             
	nescritos =   fprintf(flujo, 
		"El contenido de la cadena buffer es: %s \n",buffer);

	if (nescritos < 0)
	{            
		fprintf (stderr, 
			"Error al escribir %d caracteres en el fichero %s \n", 
			strlen(buffer),flujo);
	}            
             
	/* Nota:     
	stdout es la salida estándar, si no está redirigida 
	suele ser la pantalla
	
	stderr es la salida de error estándar, si no está redirigida 
	suele ser la pantalla
	*/           
             
	/* lo cierra */
	fclose(flujo);
}
