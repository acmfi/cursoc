#include <stdio.h>

int main(void) {
	FILE *flujo;
	char *buffer = "Hola, esto es un ejemplo muy sencillo.";
	int nescritos;
	
	/* abre el fichero */
	flujo = fopen ("datos.txt","w");
	if (flujo == NULL)
	{
		fprintf(stderr,"Error: el fichero no se ha podido abrir\n");
	}
	
	/*Escribe en el fichero*/
	nescritos = fwrite(buffer,sizeof(char),strlen(buffer),flujo);

	printf("Se han escrito:%d caracteres\n",nescritos);

	/* lo cierra */
	fclose(flujo);
}
