#include <iostream>
#include "listaEncadeada.h"

using namespace std;

int main()
{
    ListaSimplesmenteEncadeada<string,string> lista1;
    cria(lista1);
    string x = "Joao";
    inserePosNodo(lista1,x,1);
    x = "Matematica";
    inserePosNodo2(*lista1.inicio,x,1);
    x = "Ingles";
    inserePosNodo2(*lista1.inicio,x,2);
    x = "Portugues";
    inserePosNodo2(*lista1.inicio,x,3);
    x = "biologia";
    inserePosNodo2(*lista1.inicio,x,4);
    x = "Artur";
    inserePosNodo(lista1,x,2);
    x = "filosofia";
    inserePosNodo2(*lista1.inicio->proximo,x,1);
    x = "sociologia";
    inserePosNodo2(*lista1.inicio->proximo,x,1);
    exibe(lista1,"Aluno");
    removePosNodo(lista1,1);
    exibe(lista1,"Aluno");
    destroi(lista1);
    
}