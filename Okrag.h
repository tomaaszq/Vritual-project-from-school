#ifndef OKRAG_H
#define OKRAG_H
#include "Figura.h"

class Okrag : public Figura
{
    int r; // promień okręgu
public:
    Okrag(int promien );
    int pole ();
    int obwod ();
    void rysuj ();
};

#endif // OKRAG_H
