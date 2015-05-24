#include <iostream>
#include "Figura.h"
#include "Okrag.h"
#include "Kwadrat.h"
#include <cstdlib>

using namespace std;

void narysuj (Figura *F)
{
    F->rysuj();
}

int main()
{
    srand( time( NULL ) );
    Figura *tab[5][5]; //Przyjęto tablicę 25 elementową
    Okrag Ok(5); //Inicjalizacja obiektu typu Okrąg o promieniu 5.
    Kwadrat Kw(10); //Inicjalizacja obiektu typu Kwadrat o boku 10.
    int tmp=0,obwod_calkowity=0;

    for (int i=0;i<5;i++)
    {
        for (int j=0;j<5;j++)
        {
    tmp = (rand()% 2) + 0; //losowanie typu figury(kwadrat/okrąg)
    if (tmp==0)
    {
        tab[i][j]=&Ok; //wskaźnik na obiekt typu Okrąg
    }
    else
    {
     tab[i][j]=&Kw; //wskaźnik na obiekt typu Kwadrat
    }
        }
    }

    for (int i=0;i<5;i++)
    {
        for (int r=0;r<5;r++)
        {
            narysuj(tab[i][r]); //rysowanie danej figury
            obwod_calkowity=obwod_calkowity+tab[i][r]->obwod(); //Obliczanie obwodu wszystkich narysowanych figur
        }
        cout << endl;
    }

    cout << "Przyjęto, że liczba pi=3, bok kwadratu=10, a promień okręgu=5." << endl <<
            "Narysowano 25 figur, losowo wybierając za każdym razem czy ma być to kwadrat czy okrąg." << endl <<
            "Obwód wszystkich narysowanych figur wynosi: " << obwod_calkowity << endl;

    return 0;
}

