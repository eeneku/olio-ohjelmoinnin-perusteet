#include <iostream>
#include "tuote.h"
#include "asiakastili.h"

const int TUOTTEITA = 3;
const double ALEPROS = 10.0;

int main()
{
	Tuote tuotteet[TUOTTEITA] = { Tuote(0, "EkaTuote", 200), Tuote(1, "TokaTuote", 12.5), Tuote(2, "KolmasTuote", 55) };
	Asiakastili asiakas1 = Asiakastili(0, "Asiakas 1", 0);
	Asiakastili asiakas2 = Asiakastili(1, "Asiakas 2", 1040.50);

	for (int i = 0; i < TUOTTEITA; i++)
	{
		tuotteet[i].tulosta();
	}

	tuotteet[0].laskeUusiHinta(ALEPROS);

	std::cout << "------------------------" << std::endl;

	for (int i = 0; i < TUOTTEITA; i++)
	{
		tuotteet[i].tulosta();
	}

	std::cout << "------------------------" << std::endl;

	asiakas1.tulosta();
	asiakas1.lisääTilille(tuotteet[0]);
	asiakas1.tulosta();

	std::cout << "------------------------" << std::endl;

	asiakas2.tulosta();
	asiakas2.nollaa();
	asiakas2.tulosta();

	return 0;
}