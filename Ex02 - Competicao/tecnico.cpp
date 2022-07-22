#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <string>
#include "participante.h"
#include "tecnico.h"
using namespace std;



tecnico::tecnico(){
    this->numEq = 0;
}
tecnico::tecnico(string& a, int b, double c, int d) : participante(a,b,c){
    setNumEq(d);
}
tecnico::tecnico(const tecnico& objT) : participante(objT){
    this->numEq = objT.numEq;
}
tecnico& tecnico::operator=(const tecnico& objT){
    if(&objT != this){
        participante::operator=(objT);
        this->numEq = objT.numEq;
        return *this;
    }
}
tecnico::~tecnico(){

}

void tecnico::setNumEq(int d){
    this->numEq = d;
}
int tecnico::getNumEq(){
    return this->numEq;
}
double tecnico::dinheiro_recebido(){
    double t_dr;
    t_dr = (100*participante::getPremioP())+ (50 * this->numEq);
    return t_dr;
}
void tecnico::imprime_infos(){
    participante::imprime_infos();

    cout << "Numero de equipe que treina: " << getNumEq() << endl;
    cout << "Dinheiro recebido: " << dinheiro_recebido() << endl;
}
