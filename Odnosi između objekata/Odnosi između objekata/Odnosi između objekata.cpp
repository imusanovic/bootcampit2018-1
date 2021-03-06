// Odnosi između objekata.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include "Posudba.h"
#include <iostream>


int main()
{
	int izbor;
	do {
		std::system("cls");
		std::cout << "Dobrodosli u knjiznicu!\n" << std::endl;
		std::cout << "Izbornik\n1 - Unos novog korisnika\n2 - Unos nove knjige\n3 - Posudba knjige\n0 - Izlaz\n\n";
		std::cout << "Unesite svoj odabir: ";
		std::cin >> izbor;
		switch (izbor) {
		case 1:
			Korisnik::izbornik_korisnik();
			break;
		case 2:
			Knjiga::izbornik_knjiga();
			break;
		case 3:
			Posudba::izbornik_posudba();
			break;
		case 0:
			break;
		default:
			std::cout << "Niste dobro odabrali!" << std::endl;
			break;
		}
	} while (izbor != 0);
	return 0;
}