#include "Nodo.h"

typedef struct {
    Nodo* primero;
    Nodo* fin;
    int tam;
} Cola;

Lista* crearCola(){
    Cola* aux;
    aux = (Cola*) malloc(sizeof(Cola));
    aux->tam = 0;
}

void agregarNodoCola(Cola* l, Nodo* n){
    
    if(l->tam == 0){
        l->primero = n;
        l->fin = n;
    } else {
        n->sig = l->primero;
        l->primero = n;
    }
    l->tam++;
    
}

Nodo* popPila(Pila* p){
    Nodo* aux = p->fin;
    p->fin = aux->sig;
    return aux;
}

Nodo* topPila(Pila* p){
    return p->fin;
}