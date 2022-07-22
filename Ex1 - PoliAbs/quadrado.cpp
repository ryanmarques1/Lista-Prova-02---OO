#include <bits/stdc++.h>
#include "formabasica.h"
#include "quadrado.h"
using namespace std;


quadrado& quadrado::operator=(const quadrado& objQ){
    if(&objQ != this){
        formabasica::operator=(objQ);
        this->l = objQ.l;
        return *this;
    }
}

quadrado::quadrado(){
    l = 0;
}

quadrado::quadrado(const double a, const double b, const int c,const int d, const int e, const double f) : formabasica(a,b,c,d,e){
    setL(f);
}

quadrado::quadrado(const quadrado& objQ): formabasica(objQ){
    this->l = objQ.l;
}

quadrado::~quadrado(){

}

void quadrado::setL(double f){
    this->l = f;
}

double quadrado::getL(){
    return this->l;
}


void quadrado::imprime(){
    cout << "---[Quadrado]---\n";
    formabasica::imprime();
    cout << "Dimensoes quadrado: " << getL() << endl;
}

double quadrado::arearc(){
    double areaQ;

    areaQ = l*l;
    return areaQ;
}
