#include <stdio.h>
#include <stdlib.h>
#include "lista.h"

int main(void) {
	Lista* l = lst_cria();
	l= lst_insere(l,10);

	lst_imprime(l);
	int tamanho= comprimento(l);
	printf("tamanho da funcao:%d",tamanho);
	return 0;
	lst_libera(l);
	
}
