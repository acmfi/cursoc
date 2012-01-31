#include <stdio.h>

int main(void) {
	FILE *flujo;
	/* abre el fichero */
	flujo = fopen ("datos.txt","w");
	if (flujo == NULL)
	{
		fprintf(stderr,"Error: el fichero no se ha podido abrir\n");
	}
	/* lo cierra */
	fclose(flujo);
}
