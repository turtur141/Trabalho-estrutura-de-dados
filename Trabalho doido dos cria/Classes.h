#ifndef LISTASIMPLESMENTEENCADEADA_H_INCLUDED
#define LISTASIMPLESMENTEENCADEADA_H_INCLUDED

 #include <iostream>

 using namespace std;

template <typename T, typename T2>
struct Nodo2{
    T2 elemento;
    Nodo2<T,T2>* proximo;
};

 template <typename T, typename T2>
 struct Nodo {
    T elemento;
    int cardinalidade;
    Nodo<T,T2>* proximo;
    Nodo2<T,T2>* inicio2;
 };

template<typename T, typename T2>
struct ListaSimplesmenteEncadeada
 {
    int cardinalidade;
    Nodo<T,T2>* inicio;
 };

 template<typename T, typename T2>
 void cria(ListaSimplesmenteEncadeada<T,T2> &lista)
 {
    lista.cardinalidade = 0;
    lista.inicio = NULL;
 }

template<typename T, typename T2>
void inserePosNodo(ListaSimplesmenteEncadeada<T,T2> &lista, T elem, int pos){
    Nodo<T,T2> *p;
    p = new Nodo<T,T2>;
    p->elemento = elem;
    p->cardinalidade = 0;
    p->lista=NULL;
    if(pos<1 or pos > lista.cardinalidade+1)
    {
        throw "POSICAO INVALIDA";
    }
    if(pos == 1){
        p->proximo = lista.inicio;
        lista.inicio = p;
        lista.cardinalidade++;
    }
    else{
        Nodo<T,T2> *ant;
        ant = lista.inicio;
        for(int i=1;i<pos-1;i++)
            ant = ant->proximo;
        p->proximo = ant->proximo;
        ant->proximo = p;
        lista.cardinalidade++;
    }
}

template<typename T, typename T2>
void inserePosNodo2(Nodo<T,T2> &nodo, T elem, int pos){
    Nodo2<T,T2> *p;
    p = new Nodo2<T,T2>;
    p->elemento = elem;
    if(pos<1 or pos > nodo.cardinalidade+1)
    {
        throw "POSICAO INVALIDA";
    }
    if(pos == 1){
        p->proximo = nodo.inicio2;
        nodo.inicio2 = p;
        nodo.cardinalidade++;
    }
    else{
        Nodo2<T,T2> *ant;
        ant = nodo.inicio2;
        for(int i=1;i<pos-1;i++)
            ant = ant->proximo;
        p->proximo = ant->proximo;
        ant.proximo = p;
        nodo.cardinalidade++;
    }
}

template<typename T, typename T2>
void removePosNodo(ListaSimplesmenteEncadeada<T,T2> &lista, int pos){
    Nodo<T,T2> *p;
    Nodo2<T, T2> *q;
    if(pos<1 or pos > lista.cardinalidade)
    {
        throw "POSICAO INVALIDA";
    }
    if(pos == 1){
        p = lista.inicio;
        lista.inicio = lista.inicio->prox;
        while (p -> lista2 != NULL)
        {
            q = p -> lista2;
            p -> lista2 = p-> lista2 ->proximo;
            delete q;
        }
    }
    else{
        Nodo<T,T2> *ant;
        ant = lista.inicio;
        for(int i=1;i<pos-1;i++){
            ant = p;
            p = p->proximo;
        }
        ant->proximo = p->proximo2;
        while (p -> lista2 != NULL)
        {
            q = p -> lista2;
            p -> lista2 = p-> lista2 ->proximo;
            delete q;
        }
    }
    delete p;
    lista.cardinalidade--;
}
/*
template<typename T, typename T2>
void removePosNodo2(nodo<T,T2> &nodo, int pos, int pos2){
    Nodo<T,T2> *p;
    if(pos<1 or pos > lista.cardinalidade)
    {
        throw "POSICAO INVALIDA";
    }
    if(pos == 1){
        p = lista.inicio;
        lista.inicio = lista.inicio->prox;
    }
    else{
        Nodo<T,T2> *ant;
        ant = lista.inicio;
        for(int i=1;i<pos-1;i++){
            ant = p;
            p = p->proximo;
        }
        ant->proximo = p->proximo2;
    }
    delete p;
    lista.cardinalidade--;
}
*/
 template<typename T, typename T2>
 void destroi(ListaSimplesmenteEncadeada<T,T2> &lista)
 {
    Nodo<T, T2> *p;
    Nodo2<T, T2> *q;

    while (lista.inicio != NULL)
    {
        p = lista.inicio;
        lista.inicio = lista.inicio->proximo;
        while (p->inicio2 != NULL)
        {
            q = p->inicio2;
            p->inicio2 = p->inicio2 -> proximo;
            delete q;
        }
        delete p;
    }
    lista.cardinalidade = 0;
 }

 template<typename T , typename T2>
void exibe(ListaSimplesmenteEncadeada<T,T2> lista){
    while (lista.inicio != NULL){
        cout << "\n Aluno: "<< lista.inicio->elemento;
        lista.inicio = lista.inicio->proximo;
    }
}

template<typename T, typename T2>
bool verificaListaVazia(ListaSimplesmenteEncadeada<T,T2> lista){
    if(lista.cardinalidade==0)
        return true;
    return false;
}

template<typename T, typename T2>
int vereficaNumElem(ListaSimplesmenteEncadeada<T,T2> lista){
    return lista.cardinalidade;
}

template<typename T, typename T2>
bool verificaElem(ListaSimplesmenteEncadeada<T,T2> lista, T elem){
    Nodo<T,T2> *p;
    while(p!=NULL){
        if(elem == p->elemento){
            return true;
            p=p->proximo;
        }
    }
    return false;
}

template<typename T, typename T2>
bool verificaElem2(ListaSimplesmenteEncadeada<T,T2> lista ,T2 elem){
    Nodo<T, T2> *p;

    while (lista.inicio != NULL)
    {
        p = lista.inicio;
        lista.inicio = lista.inicio->proximo;
        while (p -> lista !=NULL)
        {
            if(elem == p->lista)
                return true;
            p -> lista = p-> lista ->proximo;
        }
    }
    return false;
 }
 #endif