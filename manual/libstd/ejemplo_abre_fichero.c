#include <stdio.h>

int main(void) {
	FILE *flujo;
	flujo = fopen ("datos.txt","w");
	if (flujo == NULL)
	{
		fprintf(stderr,"Error: el fichero no se ha podido abrir\n");
	}
}
