#ifndef QUADRADO_H_INCLUDED
#define QUADRADO_H_INCLUDED

#include <bits/stdc++.h>
#include "formabasica.h"
#include "retangulo.h"
using namespace std;

class quadrado : public retangulo{
    public:
        quadrado();
        quadrado(const double,const double,const int ,const int,const int,const double,const double, const double);
        quadrado(const quadrado&);
        ~quadrado();
        quadrado& operator=(const quadrado&);



        virtual void imprime();
        virtual double arearc();

    private:
        double l;
};
#endif // QUADRADO_H_INCLUDED
