#include <stdio.h>
#include <stdlib.h>
#include
// Definição da estrutura Lista
typedef struct Lista {
    int info;
    struct Lista* prox;
} Lista;

// Função que conta o número de nós
int contador_de_nos(Lista* l) {
    int contador = 0;
    Lista* atual = l;  // Começa do início da lista
    
    while(atual != NULL) {  // Enquanto não chegar ao fim
        contador++;
        atual = atual->prox;  // Avança para o próximo nó
    }
    
    return contador;  // Retorna o contador
}

// Função para criar lista vazia
Lista* lst_cria(void) {
    return NULL;
}

// Função para inserir no início
Lista* lst_insere(Lista* l, int i) {
    Lista* novo = (Lista*)malloc(sizeof(Lista));
    novo->info = i;
    novo->prox = l;
    return novo;
}

// Função para imprimir a lista
void lst_imprime(Lista* l) {
    Lista* p;
    for(p = l; p != NULL; p = p->prox) {
        printf("%d ", p->info);
    }
    printf("\n");
}

int main(void) {
    // Criando lista manualmente
    Lista x1, x2;
    x1.info = 4;
    x1.prox = &x2;
    x2.info = 3;
    x2.prox = NULL;
    
    // Contando nós da lista manual
    int num_nos = contador_de_nos(&x1);  // Passa o endereço do primeiro nó
    printf("Número de nós na lista manual: %d\n", num_nos);
    
    // Usando funções dinâmicas
    Lista* p = lst_cria();  // Cria lista vazia
    p = lst_insere(p, 10);  // Insere 10
    p = lst_insere(p, 20);  // Insere 20 no início
    p = lst_insere(p, 30);  // Insere 30 no início
    
    lst_imprime(p);  // Imprime: 30 20 10
    
    num_nos = contador_de_nos(p);
    printf("Número de nós na lista dinâmica: %d\n", num_nos);
    
    return 0;
}
