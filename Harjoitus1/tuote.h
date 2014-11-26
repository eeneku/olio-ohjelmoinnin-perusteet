#pragma once
#include <string>
#include <ostream>

class Tuote
{
public:
	Tuote(int id, char *nimi, double hinta);
	~Tuote();

	void tulosta();
	void laskeUusiHinta(double alePros);
	double annaHinta();
	void muutaHinta(double uusiHinta);

	friend std::ostream& operator<<(std::ostream &os, const Tuote &tuote);
private:
	std::string nimi;
	double hinta;
	int id;
};

std::ostream& operator<<(std::ostream &os, const Tuote &tuote);