
#include <stdlib.h>
#include <stdio.h>

typedef struct nodo *cadena_enlazada;

struct nodo{
	cadena_enlazada siguiente;
	int dato;
};

int main(){
   cadena_enlazada cad;
   cadena_enlazada actual; /* Apunta al nodo con el que trabajamos */
   
   cad = (cadena_enlazada) malloc((size_t) sizeof(struct nodo));
   
   cad->dato=2;
   cad->siguiente = (cadena_enlazada) malloc((size_t) sizeof(struct nodo));
   actual = cad->siguiente;
   actual->dato = 3; /* seria equivalente a cad->siguiente->dato = 3; */
   actual->siguiente = NULL;
   
   printf("%d\n", cad->dato);
   printf("%d\n", actual->dato);
   
   /* Devolvemos la memoria */
   free(actual);
   free(cad);
   return 0;
}
