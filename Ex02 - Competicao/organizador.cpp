#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <string>
#include "pessoa.h"
#include "organizador.h"


using namespace std;


///Construtores, Destrutores e Carregamento

organizador& organizador::operator=(const organizador& objO){
    if(&objO != this){

        pessoa::operator=(objO);
        this->horaEntrada = objO.horaEntrada;
        this->qntDias = objO.qntDias;
        this->salarioDiario = objO.salarioDiario;
        return *this;
    }
}
organizador::organizador(){
    this->horaEntrada = this->qntDias = 0;
    this->salarioDiario = 0.0;
}
organizador::organizador(string& a, int b, int c, int d, double e) : pessoa(a,b){
    setHE(c);
    setQntD(d);
    setSD(e);
}
organizador::organizador(const organizador& objO) : pessoa(objO){
    this->horaEntrada = objO.horaEntrada;
    this->qntDias = objO.qntDias;
    this->salarioDiario = objO.salarioDiario;
}

organizador::~organizador(){

}
///Construtores, Destrutores e Carregamento


///Metodos

void organizador::setHE(int c){
    this->horaEntrada = c;
}
void organizador::setQntD(int d){
    this->qntDias = d;
}
void organizador::setSD(double e){
    this->salarioDiario = e;
}

int organizador::getHE(){
    return this->horaEntrada;
}
int organizador::getQntD(){
    return this->qntDias;
}
double organizador::getSD(){
    return this->salarioDiario;
}

void organizador::imprime_infos(){
    pessoa::imprime_infos();
    cout << "Hora de Entrada: " << getHE() << endl;
    cout << "Quantidade de dias: " << getQntD() << endl;
    cout << "Salario diario: " << getSD() << endl;
}
