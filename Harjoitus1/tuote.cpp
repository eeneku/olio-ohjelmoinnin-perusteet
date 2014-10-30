#include <iostream>
#include "tuote.h"

Tuote::Tuote(int id, char *nimi, double hinta) : id(id), nimi(nimi), hinta(hinta)
{
}

Tuote::~Tuote()
{
}

void Tuote::tulosta()
{
	std::cout << "ID:     " << id << std::endl;
	std::cout << "Nimi:   " << nimi << std::endl;
	std::cout << "Hinta:  " << hinta << std::endl << std::endl;
}

void Tuote::laskeUusiHinta(double alePros)
{
	hinta *= (100 - alePros) / 100;
}

double Tuote::annaHinta()
{
	return hinta;
}