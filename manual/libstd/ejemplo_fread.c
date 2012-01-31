#include <stdio.h>

int main(void) {
	FILE *flujo;
	char buffer[38];
	int nleidos;
	
	/* abre el fichero */
	flujo = fopen ("datos.txt","r");
	if (flujo == NULL)
	{
	   fprintf(stderr,"Error: el fichero no se ha podido abrir\n");
	   exit(1);
	}

	/* Lee del fichero*/
	nleidos = fread(buffer,sizeof(char), 37, flujo);

	/* Acotamos el buffer leido */
	buffer[nleidos] = '\0';

	printf( "Ha leido %d caracteres: %s\n", nleidos, buffer );

	/* lo cierra */
	fclose(flujo);

}
