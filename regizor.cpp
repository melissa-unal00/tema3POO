#include "regizor.h"

regizor::regizor()
{

}

regizor::~regizor()
{

}

regizor::regizor(const regizor& a)
{

}

regizor& regizor::operator=(const regizor& a)
{
    if (this == &a) return *this;

    return *this;
}

ifstream& operator>> (ifstream &in, regizor &obj)
{
    in>>(personal&)obj;
    in>>obj.sumaFixa;
}
