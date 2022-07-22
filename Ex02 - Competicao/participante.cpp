#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <string>
#include "pessoa.h"
#include "participante.h"



participante& participante::operator=(const participante& objPA){
    if(&objPA != this){
        pessoa::operator=(objPA);
        this->premioParti = objPA.premioParti;
        return *this;
    }
}

participante::participante(){
    this->premioParti = 0.0;
}

participante::participante(string& a, int b, double c) : pessoa(a,b){
    setPremioP(c);
}

participante::participante(const participante& objPA) : pessoa(objPA){
    this->premioParti = objPA.premioParti;
}
participante::~participante(){

}

void participante::setPremioP(double c){
    this->premioParti = c;
}

double participante::getPremioP(){
    return this->premioParti;
}

void participante::imprime_infos(){
    pessoa::imprime_infos();
    cout << "Premio Participacao: " << getPremioP() << endl;
}

