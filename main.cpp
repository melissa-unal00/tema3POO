#include <iostream>
#include <fstream>
#include "personal.h"
#include "actor.h"
#include "regizor.h"
#include "film.h"
#include "FirmaDistributie.h"
using namespace std;
//ifstream in ("date.in");

int main()
{
   /*regizor A;
    in>>A;
    A.afisare();
   // cout<<A.bonus();*/

  FirmaDistributie<film> A;
  A.adaugaFilm();
    return 0;
}
