#include <string>
#include "tuote.h"

class Asiakastili
{
public:
	Asiakastili(int id, char *nimi, double saldo, double luottoraja);
	~Asiakastili();

	void lisääTilille(Tuote tuote);
	void nollaa();
	void tulosta();
	void maksaVelkaa(double lyhennys);
private:
	std::string nimi;
	int id;
	double saldo;
	double luottoraja;
};