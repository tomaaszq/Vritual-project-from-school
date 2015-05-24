#include <iostream>
#include "Okrag.h"
using namespace std;

Okrag::Okrag(int promien)
{
    r=promien;
}

int Okrag::pole()
{
    return liczba_pi*r*r;
}
int Okrag::obwod()
{
    return 2*liczba_pi*r;
}
void Okrag::rysuj()
{
    cout << "()";
}
