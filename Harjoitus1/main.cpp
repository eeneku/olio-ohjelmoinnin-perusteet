#include <iostream>
#include <vector>
#include <algorithm>
#include "tuote.h"
#include "asiakastili.h"

const int TUOTTEITA = 3;
const double ALEPROS = 10.0;

int main()
{
	std::vector<Tuote> tuotteet = { Tuote(0, "EkaTuote", 200), Tuote(1, "TokaTuote", 12.5), Tuote(2, "KolmasTuote", 55) };
	Asiakastili asiakas1 = Asiakastili(0, "Asiakas 1", 0, 150);
	Asiakastili asiakas2 = Asiakastili(1, "Asiakas 2", 1040.50, 2000);

	for_each(tuotteet.begin(), tuotteet.end(), [](Tuote x) 
	{ 
		std::cout << x;
	});

	tuotteet[0].laskeUusiHinta(ALEPROS);

	std::cout << "------------------------" << std::endl;

	for_each(tuotteet.begin(), tuotteet.end(), [](Tuote x) 
	{ 
		x.tulosta(); 
	});

	std::cout << "------------------------" << std::endl;

	asiakas1.tulosta();
	asiakas1.lisääTilille(tuotteet[0]);
	asiakas1.tulosta();

	std::cout << "------------------------" << std::endl;

	asiakas2.tulosta();
	asiakas2.maksaVelkaa(500);
	asiakas2.tulosta();

	std::cout << "------------------------" << std::endl;

	tuotteet[2].tulosta();
	tuotteet[2].muutaHinta(-2);
	tuotteet[2].tulosta();
	tuotteet[2].muutaHinta(999);
	tuotteet[2].tulosta();

	return 0;
}