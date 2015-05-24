#ifndef KWADRAT_H
#define KWADRAT_H
#include "Figura.h"

class Kwadrat : public Figura
{
    int a; // bok kwadratu
public:
    Kwadrat(int bok );
    int pole ();
    int obwod ();
    void rysuj ();
};


#endif // KWADRAT_H
