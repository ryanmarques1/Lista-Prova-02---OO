#include <bits/stdc++.h>

#include "formabasica.h"

istream& operator >>(istream& input, formabasica& objF){
    input >> objF.x >> objF.y;
    input >> objF.cor >> objF.espessuraContorno >> objF.tipoContorno;
    return input;
}
ostream& operator <<(ostream& output, const formabasica& objF){
    output << objF.x << objF.y;
    output << objF.cor << objF.espessuraContorno << objF.tipoContorno;
    return output;
}
formabasica& formabasica::operator=(const formabasica& objF){
    if(&objF != this){
        this->x = objF.x;
        this->y = objF.y;
        this->cor = objF.cor;
        this->espessuraContorno = objF.espessuraContorno;
        this->tipoContorno = objF.tipoContorno;
    }
    return *this;
}
///----------------------------------------
formabasica::formabasica(){
    x = y = 0.0;
    cor = espessuraContorno = tipoContorno = 1;
}
formabasica::formabasica(const double a, const double b, const int c, const int d, const int e){
    setX(a);
    setY(b);
    setCor(c);
    setEspC(d);
    setTipoC(e);
}
formabasica::formabasica(const formabasica& objF){
    this->x = objF.x;
    this->x = objF.x;
    this->y = objF.y;
    this->cor = objF.cor;
    this->espessuraContorno = objF.espessuraContorno;
    this->tipoContorno = objF.tipoContorno;
}
formabasica::~formabasica(){

}
///---------------------------------------------///

void formabasica::setX(double a){
    this->x = a;
}
void formabasica::setY(double b){
    this->y = b;
}
void formabasica::setCor(int c){
    this->cor = c;
    if(this->cor < 1 || this->cor > 5)
        this->cor = 1;
}
void formabasica::setEspC(int d){
    this->espessuraContorno = d;
    if(this->espessuraContorno < 1 || this->espessuraContorno > 5)
        this->espessuraContorno = 1;
}
void formabasica::setTipoC(int e){
    this->tipoContorno = e;
    if(this->tipoContorno < 1 || this->tipoContorno > 2)
        this->espessuraContorno = 1;
}
double formabasica::getX(){
    return this->x;
}
double formabasica::getY(){
    return this->y;
}
int formabasica::getCor(){
    return this->cor;
}
int formabasica::getEspC(){
    return this->espessuraContorno;
}
int formabasica::getTipoC(){
    return this->tipoContorno;
}
void formabasica::imprime(){
    printf("x = %.2lf y = %.2lf\n", getX(), getY());
    printf("Cor da figura: %d\n", getCor());
    printf("EspessuraContorno: %d\n", getEspC());
    printf("TipoContorno: %d\n", getTipoC());
}
