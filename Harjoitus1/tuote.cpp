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

void Tuote::muutaHinta(double uusiHinta)
{
	if (uusiHinta > 0)
		hinta = uusiHinta;
	else
		std::cout << "PIM! Hinta virheellinen: < 0." << std::endl << std::endl;
}

std::ostream& operator<<(std::ostream &os, const Tuote &tuote)
{
	os << "KUHA TESTAAN ÄÖLÄÖLÄ CTHULUHU " << std::endl;
	
	return os;
}