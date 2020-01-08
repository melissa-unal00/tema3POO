#ifndef ACTOR_H
#define ACTOR_H
#include "personal.h"


class actor : public personal
{
    bool principal;
    public:
        actor();
        ~actor();
        actor(const actor& a);
        actor& operator=(const actor& a);
        float bonus();

        friend ifstream& operator>> (ifstream &in, actor &obj);

        virtual void afisare()
        {
            cout<<"cnp="<<CNP<<endl;
            cout<<"nume="<<nume<<endl;
            cout<<"nume film="<<nume_film<<endl;
            cout<<"procent din incasari="<<procent<<endl;
            cout<<"salariu="<<incasare<<endl;
            cout<<"tipul personajului="<<principal<<endl<<endl;
        }

};

#endif // ACTOR_H
