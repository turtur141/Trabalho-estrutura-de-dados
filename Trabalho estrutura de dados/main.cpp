#include <iostream>
#include "listaEncadeada.h"

using namespace std;

int main()
{
    ListaSimplesmenteEncadeada<string,string> lista1;
    cria(lista1);
    if(verificaListaVazia(lista1))
        cout<< "\nlista vazia orap cacete";
    string x = "Joao";
    inserePosNodo(lista1,x,1);
    x = "Matematica";
    inserePosNodo2(lista1,1,x,1);
    x = "Ingles";
    inserePosNodo2(lista1,1,x,2);
    x = "Portugues";
    inserePosNodo2(lista1,1,x,3);
    x = "biologia";
    inserePosNodo2(lista1,1,x,4);
    x = "Artur";
    inserePosNodo(lista1,x,2);
    x = "filosofia";
    inserePosNodo2(lista1,2,x,1);
    x = "sociologia";
    inserePosNodo2(lista1,2,x,1);
    x = "Roberto";
    inserePosNodo(lista1,x,2);
    x = "oofahfoa";
    inserePosNodo2(lista1,2,x,1);
    x = "açslnhpaba";
    inserePosNodo2(lista1,2,x,1);
    exibe(lista1,"Aluno");
    removePosNodo(lista1,1);
    x = "Artur";
    if(verificaElem(lista1,x))
        cout<<"\nessa porra existe memsmo";
    x = "filosofia";
    if(verificaElem2(lista1,1,x))
        cout<<"\nessa porra existe também menó";
    exibe(lista1,"Aluno");
    destroi(lista1);
    if(verificaListaVazia(lista1))
        cout<< "\nlista vazia orap cacete";
}
