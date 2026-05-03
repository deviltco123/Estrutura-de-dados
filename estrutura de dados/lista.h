#ifndef LISTA_H
#define LISTA_H

#include <stdio.h>
#include <stdlib.h>

// Defini��o da estrutura do n�
typedef struct lista Lista;
/* Cria uma lista vazia.*/
Lista* lst_cria(); 
/* Testa se uma lista � vazia.*/
int lst_vazia(Lista *l); 
/* Insere um elemento no in�cio da lista.*/
Lista* lst_insere(Lista *l, int info); 
/* Busca um elemento em uma lista.*/
Lista* lst_busca(Lista *l, int info); 
/* Imprime uma lista.*/
void lst_imprime(Lista *l); 
/* Remove um elemento de uma lista.*/
Lista* lst_remove(Lista *l, int info); 
/* Libera o espa�o alocado por uma lista.*/
void lst_libera(Lista *l); 
/*funcao contador de nos*/
int comprimento(Lista* l);
#endif
