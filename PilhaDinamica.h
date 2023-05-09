#ifndef PILHAESTATICAGENERICA_H_INCLUDED
#define PILHAESTATICAGENERICA_H_INCLUDED

using namespace std;

template<typename T>
struct Nodo
{
    T elem;
    Nodo *prox;
};

template<typename T>
struct PilhaDinamica
{
    int cardinalidade;
    Nodo<T> *topo;
};

template<typename T>
void cria(PilhaDinamica<T> &pilha)
{
    pilha.cardinalidade = 0;
    pilha.topo = NULL;
}

template<typename T>
bool ehVazia (PilhaDinamica<T> pilha)
{
    return pilha.cardinalidade == 0;
}

template<typename T>
int numeroDeElementos (PilhaDinamica<T> pilha)
{
    return pilha.cardinalidade;
}

template<typename T>
bool existeElemento (PilhaDinamica<T> pilha, T elemento)
{
    Nodo<T> *p = pilha.topo;
    while(p!=NULL){
        if(p->elem == elemento)
            return true;
        p = p->prox;
    }
    return false;
}

template<typename T>
T umElemento (PilhaDinamica<T> pilha, int posicao)
{
    Nodo<T> *p = pilha.topo;
    if(posicao < 1 || posicao > pilha.cardinalidade)
    {
        throw "POSICAO INVALIDA";
    }
    for(int i=1;i<pilha.cardinalidade - posicao;i++)
        p = p->prox;
    return p->elem;
}

template<typename T>
T topo (PilhaDinamica<T> pilha)
{
    return pilha.topo->elem;
}

template<typename T>
void insere (PilhaDinamica<T> &pilha, T elemento)
{
    Nodo<T> *p = new Nodo<T>;
    if(p == NULL){
        throw "sem memória";
    }
    p->elem = elemento;
    p->prox = pilha.topo;
    pilha.topo = p;
    pilha.cardinalidade++;
}

template<typename T>
void retira (PilhaDinamica<T> &pilha)
{
    if(pilha.cardinalidade == 0)
    {
        throw "UNDERFLOW";
    }
    Nodo<T> *p = pilha.topo;
    pilha.topo = p->prox;
    delete p;
    pilha.cardinalidade--;
}

template<typename T>
void mostra (PilhaDinamica<T> pilha)
{
    if(pilha.topo != NULL){
        PilhaDinamica<T> aux = pilha;
        aux.topo = pilha.topo->prox;
        mostra(aux);
        cout << "\n" << pilha.topo->elem;
    }
}

template<typename T>
void destroi (PilhaDinamica<T> &pilha)
{
    Nodo<T> *p;
    while (pilha.topo != NULL){
        p = pilha.topo;
        pilha.topo = pilha.topo->prox;
        delete p;
    }
    pilha.cardinalidade = 0;
}

#endif // PILHAESTATICAGENERICA_H_INCLUDED
