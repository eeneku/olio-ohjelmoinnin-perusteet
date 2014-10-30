#include <string>
#include "tuote.h"

class Asiakastili
{
public:
	Asiakastili(int id, char *nimi, double saldo);
	~Asiakastili();

	void lis‰‰Tilille(Tuote tuote);
	void nollaa();
	void tulosta();
private:
	std::string nimi;
	int id;
	double saldo;
};