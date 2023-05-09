#include <iostream>
#include "PilhaDinamica.h"

using namespace std;
void toupperstr(string &str);
void soma(PilhaDinamica<double>&, string);
void subtracao(PilhaDinamica<double>&, string);
void multiplicacao(PilhaDinamica<double>&, string);
void divisao(PilhaDinamica<double>&, string);

void soma(PilhaDinamica<double> &pilha,string opcao){
    bool ponto = false;
    string valorstr = "";
    double valor = 0.0, soma;
    if(opcao.at(4) == '(' and opcao.at(opcao.size()-1) == ')'){
        for(unsigned int i = 5; i<opcao.size()-1;i++){
            if((!isdigit(opcao.at(i)) and opcao.at(i) != '.') or (opcao.at(i) == '.' and ponto == true))
                throw "Valor incorreto";
            if(opcao.at(i) == '.')
                ponto = true;
        }
        valorstr = opcao.substr(5,opcao.size()-6);
        valor = atof(valorstr.c_str());
    }
    soma = topo(pilha) + valor;
    insere(pilha,soma);
}

void subtracao(PilhaDinamica<double>&pilha, string opcao){
    bool ponto = false;
    string valorstr = "";
    double valor = 0.0, subtrai;
    if(opcao.at(7) == '(' and opcao.at(opcao.size()-1) == ')'){
        for(unsigned int i = 8; i<opcao.size()-1;i++){
            if((!isdigit(opcao.at(i)) and opcao.at(i) != '.') or (opcao.at(i) == '.' and ponto == true))
                throw "Valor incorreto";
            if(opcao.at(i) == '.')
                ponto = true;
        }
        valorstr = opcao.substr(8,opcao.size()-9);
        valor = atof(valorstr.c_str());
    }
    subtrai = topo(pilha) - valor;
    insere(pilha,subtrai);
}

void multiplicacao(PilhaDinamica<double>&pilha, string opcao){
    bool ponto = false;
    string valorstr = "";
    double valor = 0.0, multiplica;
    if(opcao.at(10) == '(' and opcao.at(opcao.size()-1) == ')'){
        for(unsigned int i = 11; i<opcao.size()-1;i++){
            if((!isdigit(opcao.at(i)) and opcao.at(i) != '.') or (opcao.at(i) == '.' and ponto == true))
                throw "Valor incorreto";
            if(opcao.at(i) == '.')
                ponto = true;
        }
        valorstr = opcao.substr(11,opcao.size()-12);
        valor = atof(valorstr.c_str());
    }
    multiplica = topo(pilha) * valor;
    insere(pilha,multiplica);
}

void divisao(PilhaDinamica<double>&pilha, string opcao){
    bool ponto = false;
    string valorstr = "";
    double valor = 0.0, divide;
    if(opcao.at(6) == '(' and opcao.at(opcao.size()-1) == ')'){
        for(unsigned int i = 7; i<opcao.size()-1;i++){
            if((!isdigit(opcao.at(i)) and opcao.at(i) != '.') or (opcao.at(i) == '.' and ponto == true))
                throw "Valor incorreto";
            if(opcao.at(i) == '.')
                ponto = true;
        }
        valorstr = opcao.substr(7,opcao.size()-8);
        valor = atof(valorstr.c_str());
    }
    divide = topo(pilha) / valor;
    insere(pilha,divide);
}

void toupperstr(string &str){
    int strsize = str.size();
    for(int j=0;j<strsize;j++)
    {
        str[j] = toupper(str[j]);
    }
}

