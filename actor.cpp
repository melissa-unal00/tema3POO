#include "actor.h"

actor::actor()
{

}

actor::~actor()
{

}

actor::actor(const actor& a)
{

}

actor& actor::operator=(const actor& a)
{
    if (this == &a) return *this;

    return *this;
}

float actor :: bonus ()
{
    if (principal==1)
        incasare+=0.1*incasare;
    return incasare;
}

ifstream& operator>> (ifstream &in, actor &obj)
{
    in>>(personal&)obj;
    in>>obj.principal;
}
