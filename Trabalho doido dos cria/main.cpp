#include <iostream>
#include "Classes.h"

using namespace std;

int main()
{
    ListaSimplesmenteEncadeada<int,int> lista1;
    cria(lista1);
    inserePosNodo(lista1,2,1);
    exibe(lista1);
    destroi(lista1);
    exibe(lista1);
}
