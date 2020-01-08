#ifndef PERSONAL_H
#define PERSONAL_H
#include <string>
#include <fstream>
#include <iostream>
#include "film.h"
using namespace std;


class personal
{
    protected:
        long long CNP;
        string nume;
        string nume_film;
        float procent=0;
        float incasare=0;

    public:
        //virtual void citire(ifstream &fin){};
        friend class film;
        virtual void afisare()
        {
            cout<<"cnp="<<CNP<<endl;
            cout<<"nume="<<nume<<endl;
            cout<<"nume film="<<nume_film<<endl;
            cout<<"procent din incasari="<<procent<<endl;
            cout<<"salariu="<<incasare<<endl<<endl;
        }
        friend ifstream& operator>> (ifstream &in, personal &obj);

        float calculIncasare();


        personal();
        ~personal();
        personal(const personal& a);
        personal& operator=(const personal& a);

};


#endif // PERSONAL_H
