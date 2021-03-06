#pragma once

#include "Struktury.cpp"
#include "Kolizja.h"

class BialyPunkt
{
public:

	void usunPunkt();
	void aktualizuj();
	void ustawXY(int xx, int yy);
	void rysuj(RenderWindow* okno);
	bool czyist();
	Wektor dajXY();
	
	BialyPunkt(int = 0 ,int  = 0, bool = true);
	~BialyPunkt();

private:

	RectangleShape kropka;
	bool czIstnieje;
	int x;
	int y;
	int xSrodek;
	int ySrodek;
};

