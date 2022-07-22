#ifndef PESSOA_H_INCLUDED
#define PESSOA_H_INCLUDED

#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <string>


using namespace std;

class pessoa{

    public:
        pessoa();
        pessoa(string&, int);
        pessoa(const pessoa&);
        ~pessoa();
        pessoa& operator=(const pessoa&);
        ///metodos;
        void setNome(string&);
        void setMatri(int);
        string& getNome();
        int getMatri();
        virtual void imprime_infos();
        virtual double dinheiro_recebido() = 0; //assume abstrata.
    private:
        string nome;
        int matriEv;
};

#endif // PESSOA_H_INCLUDED
