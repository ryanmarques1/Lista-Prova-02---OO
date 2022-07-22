#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <string>
#include "juiz.h"
#include "organizador.h"



juiz::juiz(){
    this->julgamentos = 0;
}

juiz::juiz(string& a, int b, int c, int d, double e, int f) :organizador(a,b,c,d,e){
    setJulg(f);
}

juiz::juiz(const juiz &objJ): organizador(objJ){
    this->julgamentos = objJ.julgamentos;
}

juiz& juiz::operator=(const juiz& objJ){
    if(&objJ != this){
        organizador::operator=(objJ);
        this->julgamentos = objJ.julgamentos;
        return *this;
    }
}
juiz::~juiz(){

}
void juiz::setJulg(int f){
    this->julgamentos = f;
}

int juiz::getJulg(){
    return this->julgamentos;
}
double juiz::dinheiro_recebido(){
    double d_r;
    d_r = ((organizador::getQntD() * organizador::getSD()) + 15.0) * this->julgamentos;
    return d_r;
}
void juiz::imprime_infos(){
    organizador::imprime_infos();
    cout << "Julgamentos: " << getJulg() << endl;
    cout << "Dinheiro Recebido: " << dinheiro_recebido() << endl;
}




