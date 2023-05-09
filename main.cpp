#include <iostream>
#include "PilhaDinamica.h"
#include "Funcoes.h"

using namespace std;

int main()
{
    bool ligado = false, first = true;
    string opcao = "";
    PilhaDinamica<double> pilha, resultados;
    cout << "|COMANDOS|\n\n";
    cout << "INICIO\n";
    cout << "ZERAR\n";
    cout << "SOMA(X)\n";
    cout << "SUBTRAI(X)\n";
    cout << "MULTIPLICA(X)\n";
    cout << "DIVIDE(X)\n";
    cout << "PARCELAS\n";
    cout << "IGUAL\n";
    cout << "SAIR\n\n";
    cout << "Digite um comando...\n";
    while(opcao != "SAIR"){
        cout << endl;
        getline(cin,opcao);
        toupperstr(opcao);
        if(ligado == false){
            if(opcao == "INICIO"){
                ligado = true;
                cria(pilha);
                cria(resultados);
                insere(pilha,0.0);
                cout << "Inicializado!";
            }
        }
        else{
            if(opcao == "ZERAR"){
                destroi(pilha);
                insere(pilha,0.0);
                cout << "Zerado!";
            }
            try{
                if(opcao.substr(0,4) == "SOMA"){
                    soma(pilha, opcao);
                    cout << "Feito!";
                    if(first == true)
                        first = false;
                    else insere(resultados,topo(pilha));
                }
                if(opcao.substr(0,7) == "SUBTRAI"){
                    subtracao(pilha, opcao);
                    cout << "Feito!";
                    if(first == true)
                        first = false;
                    else insere(resultados,topo(pilha));
                }
                if(opcao.substr(0,10) == "MULTIPLICA"){
                    multiplicacao(pilha, opcao);
                    cout << "Feito!";
                    if(first == true)
                        first = false;
                    else insere(resultados,topo(pilha));
                }
                if(opcao.substr(0,6) == "DIVIDE"){
                    divisao(pilha, opcao);
                    cout << "Feito!";
                    if(first == true)
                        first = false;
                    else insere(resultados,topo(pilha));
                }
            }catch(const char* msg){
                cerr << msg;
            }
            if(opcao.substr(0,5) == "IGUAL")
                cout << topo(pilha);
            if(opcao.substr(0,8) == "PARCELAS")
                mostra(resultados);
        }
        if(ligado == false)
            cout << "Primeiro inicialize o programa!";
    }
    destroi(pilha);
    if(pilha.topo == NULL) 
        cout << "\nVolte sempre!";
}
