#include "nodo.h"
#include "lista_doblemente_ligada.h"

DLista* lista_crear(){
    DLista*l = (DLista*)malloc(sizeof(DLista));
    if(l!=NULL)
    l->head = l->tail = NULL;
    return l;
}
bool lista_es_vacia(DLista *l){
    l->head = l->tail = NULL;
}

bool lista_insertar_vacia(DLista *l, void *info, size_t size){
    if(l==NULL)return false;
    Nodo *n = nodo_crear(info, size);
    l->head = l->tail = n;
    return true;
}
bool lista_insertar_inicio(DLista *l, void *info, size_t size){
    if(!l)return false;

    Nodo *nuevo = nodo_crear(info, size);
    nuevo->sig = l->head;
    l->head->ant = nuevo;
    l->head = nuevo;
    return true;
}
bool lista_insertar_fin(DLista *l, void *info, size_t size){
    if(!l)return false;

    Nodo *nuevo = nodo_crear(info, size);
    nuevo->ant = l->tail;
    l->tail->sig = nuevo;
    l->tail = nuevo;
    return true;
}
bool lista_insertar_x_pos(DLista *l, int pos, void *info, size_t size){
    if(!l)return false;
    if(DLista_es_vacia(l))return DLista_insertar_vacia(l, info, s);
    if(pos == 0)return DLista_insertar_inicio(l, info, s);
    if(pos==DLista_num_nodos(l))return DLista_insertar_fin(l, info, s);
    pos_actual=0;
    pos_actual ++;
    if(pos>=1 && pos>DLista_num_nodos(l)-1){
        Nodo *nuevo =nodo_
    }

    
}
int lista_num_nodos(DLista *l){
    int i=0;
    for(Nodo *tmp = l->head; tmp !=NULL; tmp= tmp->sig, i++);
    return i;
}