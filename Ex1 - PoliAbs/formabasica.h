#ifndef FORMABASICA_H_INCLUDED
#define FORMABASICA_H_INCLUDED

#include <bits/stdc++.h>
#include "formabasica.h"
using namespace std;

class formabasica{
    friend istream& operator >>(istream&, formabasica&);
    friend ostream& operator <<(ostream&, const formabasica&);
    public:
        ///Construtor e destrutor
        formabasica();
        formabasica(const double,const double,const int ,const int,const int);
        formabasica(const formabasica&);
        virtual ~formabasica();
        ///Construtor e destrutor
        ///Sobrecarga =
        formabasica& operator=(const formabasica&);
        ///Sobrecarga =
        ///Metodos
        void setX(double);
        void setY(double);
        void setCor(int);
        void setEspC(int);
        void setTipoC(int);
        //----------------//
        double getX();
        double getY();
        int getCor();
        int getEspC();
        int getTipoC();
        virtual void imprime();
        virtual double arearc() = 0;
    private:
        double x,y;
        int cor, espessuraContorno, tipoContorno;
};
#endif // FORMABASICA_H_INCLUDED
