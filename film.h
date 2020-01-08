#ifndef FILM_H
#define FILM_H
#include <string>
#include "personal.h"
#include "regizor.h"
#include <vector>
#include "regizor.h"

using namespace std;

class film
{
    string nume;
    string tip;
    int durata;
    float incasareTotala = 0;
    regizor regiz;
    vector <actor> actori;
    vector <persoane> personal_tehnic;
    int nrActori=0;
    int nrPersonal=0;

    public:
        film();
        ~film();
        film(const film& a);
        film& operator=(const film& a);
       // friend class personal;
           virtual void afisare()
    {
        cout<<"nume="<<nume<<endl;
        cout<<"tip="<<tip<<endl;
        cout<<"durata="<<durata<<endl;
        cout<<"incasareTotala="<<incasareTotala<<endl;
    }

      friend ifstream& operator>> (ifstream &in, film &obj);

    friend class personal;
    template <class T>
    friend class FirmaDistributie;
};

#endif // FILM_H
