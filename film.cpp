#include "film.h"
#include "personal.h"
using namespace std;

film::film()
{

}

film::~film()
{

}

film::film(const film& a)
{

}

film& film::operator=(const film& a)
{
    if (this == &a) return *this;
    return *this;
}

ifstream& operator>> (ifstream &in, film &obj)
{
    in>>obj.nume;
    in>>obj.tip;
    in>>obj.durata;
    in>>obj.incasareTotala;
}
void film::exceptii()
{
    try
    {
        if(CNP/pow(10,13) > 9 || CNP/pow(10,13) < 1 || CNP!=(int)CNP)
            throw 1.5;
        if (find_if(nume.begin(), nume.end(), isdigit) != nume.end())
            throw 'x';
        if(!nrActori || nrActori < 0 || !nrPersonal || nrPersonal < 0)
            throw 12345;
        if(!incasareTotala)
            throw "abcdefgh";
    }
    catch(const char *s i) {cout<<"INVALID!";}//numar invalid
    catch(int i)
        {
            cout<<"INVALID!"; //numar invalid
        }
    catch(char c)
        {
            cout<<"INVALID!";  //numarul contine cifre
        }
    catch(float f)
        {
            cout<<"INVALID!";
        }
}
