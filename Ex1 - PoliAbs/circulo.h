#ifndef CIRCULO_H_INCLUDED
#define CIRCULO_H_INCLUDED
#include <bits/stdc++.h>
#include "formabasica.h"
using namespace std;

class circulo : public formabasica{
    friend istream& operator >>(istream&, circulo&);
    friend ostream& operator <<(ostream&, const circulo&);
    public:
        ///Construtor e destrutor
        circulo();
        circulo(const double,const double,const int ,const int,const int,const double);
        circulo(const circulo&);
        ~circulo();
        ///Construtor e destrutor
        ///Sobrecarga =
        circulo& operator=(const circulo&);
        ///Sobrecarga =
        void setRaio(double);
        double getRaio();
        //---------------//
        virtual double arearc();
        virtual void imprime();
        ///Metodos
    private:
        double raio;
};
#endif // CIRCULO_H_INCLUDED
