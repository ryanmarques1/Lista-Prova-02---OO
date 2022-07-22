#include <bits/stdc++.h>
#include "circulo.h"
#include "formabasica.h"
#define PI 3.1416
using namespace std;


circulo& circulo::operator=(const circulo& objC){
    if(&objC != this){
        formabasica::operator=(objC);
        this->raio = objC.raio;
    }
    return *this;
}
istream& operator >>(istream& input, circulo& objC){
    input >> objC.raio;
    return input;
}
ostream& operator <<(ostream& output, const circulo& objC){
    output << objC.raio;
    return output;
}
///----------------------------------------
circulo::circulo(){
    raio = 0.0;

}
circulo::circulo(const double a,const double b,const int c ,const int d ,const int e,const double f): formabasica(a,b,c,d,e){
    setRaio(f);
}
circulo::circulo(const circulo &objC):formabasica(objC){
    this->raio = objC.raio;
}
circulo::~circulo(){

}
///------------Set E Get---------------------
void circulo::setRaio(double f){
    this->raio = f;
}
double circulo::getRaio(){
    return this->raio;
}

///------------Set E Get---------------------

///------------Imprime e Area----------------
double circulo::arearc(){
    double area;
    area = PI * (pow(this->raio,2));
    return area;
}
void circulo::imprime(){
    cout << "--- [Circulo] ---\n";
    formabasica::imprime();
    printf("Raio: %.2lf\n", getRaio());
}
