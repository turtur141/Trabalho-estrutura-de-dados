#include <iostream>
#include "listaEncadeada.h"

using namespace std;

int main()
{
    ListaSimplesmenteEncadeada<string,string> lista1;
    cria(lista1);
    if(verificaListaVazia(lista1))
        cout<< "\nlista vazia pra cacete";
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
    exibe(lista1,"Aluno");
    system("pause");
    system("cls");
    x = "Roberto";
    inserePosNodo(lista1,x,2);
    x = "quimica";
    inserePosNodo2(lista1,2,x,1);
    x = "fisica";
    inserePosNodo2(lista1,2,x,1);
    x = "arte";
    inserePosNodo2(lista1,2,x,2);
    removePosNodo(lista1,1);
    x = "Artur";
    if(verificaElem(lista1,x))
        cout<<"\n\nessa porra existe mesmo";
    x = "quimica";
    if(verificaElem2(lista1,1,x))
        cout<<"\n\nessa porra existe tambem meno";
    cout << "\ncardinalidade alunos: "<< retornaNumElem(lista1);;
    cout << "\ncardinalidade materias primeiro aluno: "<< retornaNumElem2(lista1,1);
    removePosNodo2(lista1,2,2);
    exibe(lista1,"Aluno");
    destroi(lista1);
    if(verificaListaVazia(lista1)){
        cout<< "\n\nlista vazia";
    }
    cout << "\n\nfim";
}
