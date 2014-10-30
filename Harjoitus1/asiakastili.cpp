#include <iostream>
#include "asiakastili.h"

Asiakastili::Asiakastili(int id, char *nimi, double saldo) : id(id), nimi(nimi), saldo(saldo)
{
}

Asiakastili::~Asiakastili()
{
}

void Asiakastili::lis‰‰Tilille(Tuote tuote)
{
	saldo += tuote.annaHinta();
}

void Asiakastili::nollaa()
{
	saldo = 0;
}

void Asiakastili::tulosta()
{
	std::cout << "ID:     " << id << std::endl;
	std::cout << "Nimi:   " << nimi << std::endl;
	std::cout << "Saldo:  " << saldo << std::endl << std::endl;
}