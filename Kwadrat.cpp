#include <iostream>
#include "Kwadrat.h"
using namespace std;

Kwadrat::Kwadrat(int bok)
{
    a=bok;
}

int Kwadrat::pole ()
{
    return a*a;
}
int Kwadrat::obwod ()
{
    return 4 * a;
}
void Kwadrat::rysuj()
{
    cout << "[]";
}
