#include <stdio.h>

int main(void) {
	FILE *flujo;
	char *buffer = " Este texto quedara al final del fichero.";
	int nescritos;

	/* abre el fichero */
	flujo = fopen ("datos.txt","a");
	if (flujo == NULL)
	{
		fprintf(stderr,"Error: el fichero no se ha podido abrir\n");
	}

	/* Mueve el puntero de posicion para escribir al final, 
	 * aunque no haria falta porque en la llamada a fopen se
	 * abrio el fichero con el modo "a" que situa el puntero de 
	 * posicion al final del fichero 
	 */
	fseek(flujo,0,SEEK_END);

	/* Escribe en el fichero */
	nescritos = fprintf (flujo,"%s",buffer);

	/* La siguiente llamada es equivalente, solo que usa fwrite: 
	nescritos = fwrite(buffer,sizeof(char),strlen(buffer),flujo);
	*/

	fprintf (stdout, "Ha escrito %d caracteres:\n",nescritos);

	/* lo cierra */
	fclose(flujo);
}
