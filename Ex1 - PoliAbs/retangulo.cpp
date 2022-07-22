#include <bits/stdc++.h>
#include "retangulo.h"
#include "formabasica.h"
using namespace std;
retangulo& retangulo::operator=(const retangulo& objR){
    if(&objR != this){
        formabasica::operator=(objR);
        this->larg = objR.larg;
        this->alt = objR.alt;
    }
    return *this;
}
istream& operator >>(istream& input, retangulo& objR){
    input >> objR.larg >> objR.alt;
    return input;
}
ostream& operator <<(ostream& output, const retangulo& objR){
    output << objR.larg << objR.alt;
    return output;
}
///------------------------------------------------------------

retangulo::retangulo(){
    larg = alt = 0.0;

}
retangulo::retangulo(const double a,const double b,const int c ,const int d,const int e ,const double f,const double g) : formabasica(a,b,c,d,e){
    setLargura(f);
    setAltura(g);
}
retangulo::retangulo(const retangulo& objR):formabasica(objR){
    this->alt = objR.alt;
    this->larg = objR.larg;
}
retangulo::~retangulo(){

}
///--------------------------------------

///----------Set e Get------------------///

void retangulo::setLargura(double f){
    this->larg = f;
}
void retangulo::setAltura(double g){
    this->alt = g;
}
double retangulo::getLargura(){
    return this->larg;
}
double retangulo::getAltura(){
    return this->alt;
}
///----------Set e Get------------------///

///----------Imprime e Area///
double retangulo::arearc(){
    double area_r;
    area_r = this->larg * this->alt;
    return area_r;
}
void retangulo::imprime(){
    cout << "--- [Retangulo] ---\n";
    formabasica::imprime();
    printf("Largura = %.2lf Altura = %.2lf\n", getLargura(), getAltura());

}
///----------Imprime e Area///
