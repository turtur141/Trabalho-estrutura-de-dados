#ifndef LISTASIMPLESMENTEENCADEADA_H_INCLUDED
#define LISTASIMPLESMENTEENCADEADA_H_INCLUDED

#include <iostream>

using namespace std;


int justonedigit(string msg){
    string impute;
    char n;
    int m;
    cout << msg;
    getline(cin,impute);
    if(impute.size() > 1 or impute.size() == 0)
    {
        cout << "\nOpcao invalida\n\n";
        pausarelimpar();
        return -1;
    }
    n = impute.at(0);
    if(not isdigit(n))
    {
        cout << "\nCaractere invalido!\n\n";
        pausarelimpar();
        return -1;
    }
    m = (int)n - 48;
    return m;
}

void pausarelimpar(){
    system("pause");
    system("cls");
}

#endif