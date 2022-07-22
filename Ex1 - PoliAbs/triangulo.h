#ifndef TRIANGULO_H_INCLUDED
#define TRIANGULO_H_INCLUDED

#include <bits/stdc++.h>
#include "formabasica.h"

using namespace std;

class triangulo : public formabasica{

    public:
        triangulo();
        triangulo(const double,const double,const int ,const int,const int, const double, const double);
        triangulo(const triangulo&);
        triangulo& operator=(const triangulo&);

         ~triangulo();

        void setBase(double);
        void setAlt(double);

        double getBase();
        double getAlt();
        virtual void imprime();
        virtual double arearc();
    private:
        double base, alt;
};

#endif // TRIANGULO_H_INCLUDED
