#include <iostream>
#include "asiakastili.h"

Asiakastili::Asiakastili(int id, char *nimi, double saldo, double luottoraja) : id(id), nimi(nimi), saldo(saldo), luottoraja(luottoraja)
{
}

Asiakastili::~Asiakastili()
{
}

void Asiakastili::lis‰‰Tilille(Tuote tuote)
{
	if (saldo + tuote.annaHinta() <= luottoraja)
		saldo += tuote.annaHinta();
	else
		std::cout << "PIM! Luottoraja ylitetty. Summaa ei lis‰tty." << std::endl << std::endl;
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

void Asiakastili::maksaVelkaa(double lyhennys)
{
	if ((saldo -= lyhennys) < 0)
		saldo = 0;
}