#include <iostream>
#include "listaEncadeada.h"
#include "subrotinas.h"

using namespace std;
void pausarelimpar();
int justonedigit(string msg);
int main()
{
    ListaSimplesmenteEncadeada<string,string> listaAluno;
    ListaSimplesmenteEncadeada<string,int> listaMateria;
    cria(listaAluno);
    cria(listaMateria);
    string nome = "";
    int opcao=0;
    do
    {
        opcao= -1;
        cout << "O que desejas fazer?" << endl << endl;
        cout << "(1) Cadastrar um aluno" << endl;
        cout << "(2) Cadastrar uma disciplina em um aluno" << endl;
        cout << "(3) Retirar um aluno" << endl;
        cout << "(4) Retirar uma disciplina de um aluno" << endl;
        cout << "(5) Mostrar todos os alunos e disciplinas" << endl;
        cout << "(6) Mostrar todas as disciplinas de um aluno" << endl;
        cout << "(7) Sair e apagar listas" << endl;
        opcao = justonedigit("Opcao: "); 
        switch(opcao){
            case 1:
                int pos;
                cout << "Escreva o nome do novo Aluno: \n";
                getline(cin,nome);
                cout << "Escreva a posicao em que voce quer inserir: \n";
                cin >> pos;
                try{
                    inserePosNodo(listaAluno,nome,pos);
                }
                catch(const char msg){
                    cerr << msg << endl;
                }
                break;
            case 2:
                int pos;
                int pos2;
                cout << "Escreva o nome da nova materia: \n";
                getline(cin,nome);
                cout << "Escreva a posicao do aluno em que voce quer inserir: \n";
                cin >> pos;
                cout << "Escreva a posicao em que voce quer inserir a materia: \n";
                cin >> pos2;
                try{
                    inserePosNodo2(listaAluno,pos,nome,pos2);
                }
                catch(const char msg){
                    cerr << msg << endl;
                }
                if(!verificaElem(listaMateria,nome)){
                    inserePosNodo(listaMateria,nome,1);
                    
                }
                
                break;
            case 3:
                cout << "Escreva a posicao em que voce quer remover o aluno: \n";
                cin >> pos;
                try{
                    removePosNodo(listaAluno,pos);
                }
                catch(const char msg){
                    cerr << msg << endl;
                }
                break;
            case 4:
                                int pos;
                int pos2;
                cout << "Escreva a posicao do aluno em que voce quer remover uma materia: \n";
                cin >> pos;
                cout << "Escreva a posicao em que você quer inserir a materia: \n";
                cin >> pos2;
                try{
                    removePosNodo2(listaAluno,pos,pos2);
                }
                catch(const char msg){
                    cerr << msg << endl;
                }
                break;
            case 5:
                nome = "Aluno";
                exibe(listaAluno,nome);
                break;
            case 6:
                break;
            case 7:
                system("cls");
                cout << "Ate a proxima!!!\n\nNos de uma boa nota *-*";
                break;
        }



        if(opcao>6 or opcao==0)
        {
            cout << "\n\nCaractere invalido!\n\n";
            pausarelimpar();
        }
    }
    while(opcao!=7);
}
