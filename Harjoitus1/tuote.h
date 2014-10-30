#pragma once
#include <string>

class Tuote
{
public:
	Tuote(int id, char *nimi, double hinta);
	~Tuote();

	void tulosta();
	void laskeUusiHinta(double alePros);
	double annaHinta();
	void muutaHinta(double uusiHinta);
private:
	std::string nimi;
	double hinta;
	int id;
};