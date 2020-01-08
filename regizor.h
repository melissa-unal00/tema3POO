#ifndef REGIZOR_H
#define REGIZOR_H
#include "personal.h"


class regizor : public personal
{
    float sumaFixa=0;
    public:
        regizor();
        ~regizor();
        regizor(const regizor& a);
        regizor& operator=(const regizor& a);
        friend ifstream& operator>> (ifstream &in, regizor &obj);

        virtual void afisare()
        {
            cout<<"cnp="<<CNP<<endl;
            cout<<"nume="<<nume<<endl;
            cout<<"nume film="<<nume_film<<endl;
            cout<<"procent din incasari="<<procent<<endl;
            cout<<"salariu="<<incasare<<endl;
            cout<<"suma fixa="<<sumaFixa<<endl<<endl;
        }
};

#endif // REGIZOR_H
