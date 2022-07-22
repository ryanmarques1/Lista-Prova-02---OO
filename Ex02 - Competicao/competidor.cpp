#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <string>
#include "competidor.h"
using namespace std;


competidor::competidor(){
    this->nomeEq = '\0';
    this->colocacao = 0.0;
}

competidor::competidor(string& a, int b, double c, string& d, int e) : participante(a,b,c){
    setNomeEq(d);
    setColoc(e);
}
competidor::competidor(const competidor& objC) : participante(objC){
    this->nomeEq = objC.nomeEq;
    this->colocacao = objC.colocacao;
}

competidor& competidor::operator=(const competidor& objC){
    if(&objC != this){
        participante::operator=(objC);
        this->nomeEq = objC.nomeEq;
        this->colocacao = objC.colocacao;
        return *this;
    }
}
competidor::~competidor(){

}

void competidor::setNomeEq(string& d){
    this->nomeEq = d;
}
void competidor::setColoc(int e){
    this->colocacao = e;
}
string& competidor::getNomeEq(){
    return this->nomeEq;
}
int competidor::getColoc(){
    return this->colocacao;
}

double competidor::dinheiro_recebido(){
    double comp_dr;
    if(this->colocacao >= 1 || this->colocacao <= 3){
        comp_dr = ((100*participante::getPremioP()) + 300)/this->colocacao;
    }else{
        comp_dr = (100*participante::getPremioP());
    }
    return comp_dr;
}
void competidor::imprime_infos(){
    participante::imprime_infos();

    cout << "Nome da equipe: " << getNomeEq() << endl;
    cout << "Colocacao: " << getColoc() << endl;
    cout << "Dinheiro Recebido: " << dinheiro_recebido() << endl;
}
