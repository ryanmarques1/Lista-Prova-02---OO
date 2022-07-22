#ifndef RETANGULO_H_INCLUDED
#define RETANGULO_H_INCLUDED
#include <bits/stdc++.h>
#include "formabasica.h"

using namespace std;


class retangulo : public formabasica{
    friend istream& operator>>(istream&, retangulo&);
    friend ostream& operator<<(ostream&, const retangulo&);
    public:
        ///Construtor e destrutor
        retangulo();
        retangulo(const double,const double,const int ,const int,const int,const double,const double);
        retangulo(const retangulo&);
        ~retangulo();
        ///Construtor e destrutor
        ///Sobrecarga =
        retangulo& operator=(const retangulo&);
        ///Sobrecarga =
        ///Metodos
        void setLargura(double);
        void setAltura(double);
        //----------------//
        double getLargura();
        double getAltura();
        //---------------//
        virtual double arearc();
        virtual void imprime();
    private:
        double larg,alt;
};
#endif // RETANGULO_H_INCLUDED
