#include <bits/stdc++.h>
#include "formabasica.h"
#include "quadrado.h"
using namespace std;


quadrado& quadrado::operator=(const quadrado& objQ){
    if(&objQ != this){
        retangulo::operator=(objQ);
        this->l = objQ.l;
        return *this;
    }
}

quadrado::quadrado(){
    l = 0;
}

quadrado::quadrado(const double a,const double b,const int c,const int d,const int e,const double f,const double g,const double h) : retangulo(a,b,c,d,e,f,g){
    retangulo::setAltura(h);
}

quadrado::quadrado(const quadrado& objQ): retangulo(objQ){
    this->l = objQ.l;
}

quadrado::~quadrado(){

}

void quadrado::imprime(){
    cout << "---[Quadrado]---\n";
    formabasica::imprime();
    cout << "Dimensoes quadrado: " << retangulo::getAltura() << endl;
}

double quadrado::arearc(){
    double areaQ;
    areaQ = retangulo::getAltura() * retangulo::getAltura();
    return areaQ;
}
