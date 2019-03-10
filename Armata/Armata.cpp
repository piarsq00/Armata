// Armata.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include "pch.h"
#include <iostream>

class Armata {
protected:
	float kat = 0;
	float Vp = 0;
	float m = 0;
	float g;
public:
	void licz_zasieg();
	void licz_wysokosc();
	void czas_lotu();
	Armata();
	void wstaw_dane(float kat, float Vp, float m, float g);
	float zasieg();


};


int main()
{
	return 0;
}

