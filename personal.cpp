#include "personal.h"
#include "film.h"

personal::personal()
{

}

personal::~personal()
{

}

personal::personal(const personal& a)
{

}

personal& personal::operator=(const personal& a)
{
    if (this == &a) return *this;
    return *this;
}
ifstream& operator>> (ifstream &in, personal &obj)
{
    in>>obj.CNP;
    in>>obj.nume;
    in>>obj.nume_film;
    in>>obj.procent;
    in>>obj.incasare;
}

float personal::calculIncasare()
{
    film aux;
    incasare=aux.incasareTotala*procent;
    return incasare;
}
/*void personal :: afisare()
{
    cout<<"cnp="<<cnp<<endl;
    cout<<"nume="<<nume<<endl;
    cout<<"nume film="<<nume_film<<endl;
    cout<<"procent din incasari="<<procent<<endl;
    cout<<"salariu="<<incasare<<endl<<endl;

}*/
try{
    if(CNP/pow(10,13) > 9 || CNP/pow(10,13) < 1 || CNP!=(int)CNP)
        throw 1.5;
    if (std::find_if(nume.begin(), nume.end(), std::isdigit) != nume.end())
        throw 'x';
    if(procent > 100 || !procent)
        throw 12345;
    if(!incasare)
        throw "abcdefgh";
    }
    catch(const char *s i)
        {
            cout<<"INVALID!"; //nu este numar
        }
    catch(int i)
        {
            cout<<"INVALID!"; //nu e procent
        }
    catch(char c)
        {
            cout<<"INVALID!"; //contine cifre
        }
    catch(float f)
        {
            cout<<"INVALID!"; //nu e cnp
        }
