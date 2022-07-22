#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <string>
#include "organizador.h"
#include "ajudante.h"
using namespace std;

ajudante::ajudante(){
    this->assists = 0;
}

ajudante::ajudante(string& a, int b, int c, int d, double e, int f) : organizador(a,b,c,d,e){
    setAss(f);
}
ajudante::ajudante(const ajudante& objA) : organizador(objA){
    this->assists = objA.assists;
}

ajudante& ajudante::operator=(const ajudante& objA){
    if(&objA != this){
        organizador::operator=(objA);
        this->assists = objA.assists;
        return *this;
    }
}

ajudante::~ajudante(){

}

void ajudante::setAss(int f){
    this->assists = f;
}

int ajudante::getAss(){
    return this->assists;
}

double ajudante::dinheiro_recebido(){
    double d_rr;
    d_rr = ((organizador::getQntD() * organizador::getSD()) + 10.0) * this->assists;
    return d_rr;
}
void ajudante::imprime_infos(){
    organizador::imprime_infos();
    cout << "Assistencias: " << getAss() << endl;
    cout << "Dinheiro Recebido: " << dinheiro_recebido() << endl;
}
