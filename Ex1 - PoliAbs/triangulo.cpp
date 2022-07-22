#include <bits/stdc++.h>
#include "formabasica.h"
#include "triangulo.h"
using namespace std;


triangulo::triangulo(){
    this->base = this->alt = 0.0;
}

triangulo::triangulo(const double a, const double b, const int c , const int d, const int e, const double f, const double g) : formabasica(a,b,c,d,e){
    setBase(f);
    setAlt(g);
}

triangulo::triangulo(const triangulo& objT) : formabasica(objT){
    this->base = objT.base;
    this->alt = objT.alt;
}
triangulo::~triangulo(){

}
triangulo& triangulo::operator=(const triangulo& objT){
    if(&objT != this){
        formabasica::operator=(objT);
        this->base = objT.base;
        this->alt = objT.alt;
        return *this;
    }
}

void triangulo::setBase(double f){
    this->base = f;
}
void triangulo::setAlt(double g){
    this->alt = g;
}

double triangulo::getBase(){
    return this->base;
}
double triangulo::getAlt(){
    return this->alt;
}

void triangulo::imprime(){
    cout << "---[Triangulo]---\n";
    formabasica::imprime();
    cout << "Base: " << getBase() << endl;
    cout << "Altura: " << getAlt() << endl;
}

double triangulo::arearc(){
    double areaT;

    areaT = (this->base * this->alt) / 2.0;

    return areaT;
}
