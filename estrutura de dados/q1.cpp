#include <std.io>;
#include "lista.h";

struct lista{
	int info
 struct lista* prox;
};
typedef struct lista Lista;
Lista* lst_cria(void){
	return NULL;
}
static Lista* aloca(int b,int h){
	Lista* p=(Lista*)malloc(sizeof(Lista));
	p->info.b=b;
	p->info.h=h;
	return p;
}
int contador_de_nos(Lista*, l){
	int contador=0;
	Lista* atual=l;
	while(atual!=NULL){
		contadaor++;
		atual=atual->prox;
	}
}
 void main(){
 	int i;
 	lst_cria();
 	Lista* lst_insere(*p,i);
 	contador_de_nos(*p,l);
 	lst_imprime(*p);
 	
 }
