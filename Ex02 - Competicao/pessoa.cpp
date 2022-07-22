#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <string>
#include "pessoa.h"


using namespace std;


///Construtores, Destrutores e Carregamento
pessoa& pessoa::operator=(const pessoa& objP){
    if(&objP != this){
        this->nome = objP.nome;
        this->matriEv = objP.matriEv;
        return *this;
    }
}

pessoa::pessoa(){
    this->nome = '\0';
    this->matriEv = 0;
}
pessoa::pessoa(string& a, int b){
    setNome(a);
    setMatri(b);
}

pessoa::pessoa(const pessoa& objP){
    this->nome = objP.nome;
    this->matriEv = objP.matriEv;
}

pessoa::~pessoa(){

}
///Construtores, Destrutores e Carregamento

///Metodos;

void pessoa::setNome(string& a){
    this->nome = a;
}
void pessoa::setMatri(int b){
    this->matriEv = b;
}
string& pessoa::getNome(){
    return this->nome;
}
int pessoa::getMatri(){
    return this->matriEv;
}

void pessoa::imprime_infos(){
    cout << "Nome da Pessoa: " << getNome() << endl;
    cout << "Matricula cadastrada: " << getMatri() << endl;
}
///Metodos;
