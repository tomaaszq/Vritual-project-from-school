#ifndef FIGURA_H
#define FIGURA_H

#include <iostream>
using namespace std;
//założenie, że liczba pi=3.
const float liczba_pi = 3;

class Figura
{
public:

    virtual int pole ();
    virtual int obwod ();
    virtual void rysuj ()=0; //Metoda czysto wirtualna
};

#endif // FIGURA_H
