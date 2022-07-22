#ifndef JUIZ_H_INCLUDED
#define JUIZ_H_INCLUDED
#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <string>
#include "organizador.h"
using namespace std;

class juiz : public organizador{

    public:
        juiz();
        juiz(string&a , int, int , int ,double, int);
        juiz(const juiz&);
        ~juiz();
        juiz& operator=(const juiz&);

        void setJulg(int);
        int getJulg();

        virtual void  imprime_infos();
        virtual double dinheiro_recebido();
    private:
        int julgamentos;
};


#endif // JUIZ_H_INCLUDED
