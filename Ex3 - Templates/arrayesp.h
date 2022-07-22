#ifndef ARRAYESP_H_INCLUDED
#define ARRAYESP_H_INCLUDED
#include <iostream>
#include <stdlib.h>
#include <stdio.h>

using namespace std;
template <class A>
class ArrayEsp{
    template <class A2> // para sobrecarregar >>
    friend istream& operator >>(istream&, ArrayEsp<A2>&);
    template <class A2>//  para sobrecarregar <<
    friend ostream& operator <<(ostream&, const ArrayEsp<A2>&);
    public:
        ArrayEsp();
        ArrayEsp(const ArrayEsp<A>&);
        ~ArrayEsp();
        ArrayEsp<A>& operator=(const ArrayEsp<A>&);
        //metodos
        void insere(A e, int pos);
        void removE(int);
        void imprimeEle();
    private:
        A* elem; //VETOR
        int tam,maxi; //tamanho do vetor, maximo de elementos
        bool* ativos; //ativos
};

//-----------------------------------------------------------implementação file.cpp -----------------------------------------------------------


///Sobrecarregementos do >> << == e []
template <class A2>
istream& operator>>(istream& input, ArrayEsp<A2>& objA){
    printf("Coloque a quantidade de elementos: %d", objA.tam);
    for(int i = 0; i < objA.tam; i++)
        input >> objA.elem[i];
    return input;
}

template <class A2>
ostream& operator <<(ostream& output, const ArrayEsp<A2>& objA){
    output << "[";
    for(int i = 0 ; i < objA.tam; i++)
        output << ", " <<objA.elem[i];
    output << "]";
    return output;
}
template <class A>
ArrayEsp<A>& ArrayEsp<A>::operator=(const ArrayEsp<A>& objA){
    if(&objA != this){
        if(maxi != objA.maxi || tam != objA.tam){ ///maxi = elementos, tam = ativos;
            delete [] elem;
            delete [] ativos;
            tam = objA.tam;
            ativos = new bool[tam];
            //--//
            maxi = objA.maxi;
            elem = new A[maxi];
        }
        for(int i = 0; i < tam; i++){
            ativos[i] = objA.ativos[i];
        }
        for(int j = 0; j < maxi; j++){
            elem[j] = objA.elem[j];
        }
    }
}
///Sobrecarregementos do >> << == e []

template <class A>
ArrayEsp<A>::ArrayEsp(){
    cout << "construtor - padrao" << endl;
    tam = 10;
    maxi = 10;
    elem = new A[maxi];
    ativos = new bool[tam];
    for(int i = 0; i < tam; i++){
        ativos[i] = false;
    }
    /*for(int j = 0; j < maxi; j++){
        elem[j] = NULL;
    }*/
}
template <class A>
ArrayEsp<A>::ArrayEsp(const ArrayEsp<A>& objA){
    if(tam > 0 || maxi > 0){
        delete [] ativos;
        delete [] elem;
    }
    tam = objA.tam;
    maxi = objA.maxi;

    elem = new A[maxi];
    ativos = new bool[tam];
    for(int i = 0; i < tam; i++){
        ativos[i] = objA.ativos[i];
    }
    for(int j = 0; j < maxi; j++){
        elem[j] = objA.elem[j];
    }
}
template <class A>
ArrayEsp<A>::~ArrayEsp(){
    cout << "MG && SP > ALL" << endl;
    delete [] elem;
    delete [] ativos;
}
template <class A>
void ArrayEsp<A>::insere(A e, int pos){
    if(ativos[pos] != true){
        elem[pos] = e;
        ativos[pos] = true;
    }
}
template <class A>
void ArrayEsp<A>::removE(int pos){
    if(ativos[pos] == true){
        this->ativos[pos] = false;
    }
}
template <class A>
void ArrayEsp<A>::imprimeEle(){
    for(int i = 0; i < tam; i++){
        if(ativos[i] == true){
            cout << "---[Elementos ativos]---\n" << endl;
            cout <<"Posicao- " << i + 1  << "| Elemento- " << elem[i] << "\n";
        }
    }

}
#endif // ARRAYESP_H_INCLUDED
