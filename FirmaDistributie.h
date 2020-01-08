#ifndef FIRMADISTRIBUTIE_H
#define FIRMADISTRIBUTIE_H
#include <vector>
#include "film.h"
#include <fstream>
//#include <tuple>
using namespace std;

template <class T>
class FirmaDistributie
{
    vector <film> filmSpecific = vector <film> (10);
    int nrTotalPers=0;
    int nrActori=0;
    vector <T> persoane;

    public:
        FirmaDistributie(){}
        ~FirmaDistributie(){}
        FirmaDistributie(const FirmaDistributie& other){}
        FirmaDistributie& operator=(const FirmaDistributie& other){}
        void adaugaFilm ()
        {
        int n;
        ifstream file("date.in");
        file>>n;
        for (int i=0; i<n; i++)
        {
            film f;
            file>>f;
            f.afisare();
            filmSpecific.push_back(f);
            cout<<endl;
        }
        }
        void centralizare_personal(film x)
        {
            persoane.push_back(&x.regiz);

            for(int i=0;i<x.nrActori;i++)
            persoane.push_back(&x.actori[i]);

            for(int i=0;i<x.nrPersonal;i++)
            persoane.push_back(&x.personal_tehnic[i]);

        }

       // for (int i=0; i<filmSpecific.size(); i++)
        //    cout<<filmSpecific[i]<<" ";
        void setTuple()
        {
            tuple<personal,film,float> structura_tuple;
            for (int i=0; i<persoana.size(); i++)
                structura_tuple=make_tuple(x.persoane[i],x.film[i],x.persoane[i].bonus)
        }

};

template<>
class FirmaDistributie<actor>
{
    int nrActoriPrincipali=0
public:
    FirmaDistributie(film x)
    {
        for (int i=0; i<x.nrActori; i++)
        {
            if (x.actori[i].principal == 1) //principal e bool
                nrActoriPrincipali++

        }
    }
};

#endif // FIRMADISTRIBUTIE_H
