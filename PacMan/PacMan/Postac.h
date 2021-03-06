#pragma once

#include "Lista_zmiennych_stalych.cpp"

extern class Mapa;
extern class Kolizja;

class Postac
{
public:
	float dajPredkosc();
	virtual void zmienZwrotJesliMozliwe() = 0;
	virtual void obsluzKolizjeZMmapa(int, Kolizja *) = 0;
	Postac(float = 0, int = LEWO);
	~Postac();

protected:
	float predkosc; // piksel/sekunde
	int kierunek; // 1 - g�ra, 2 - lewo, 3 - d�, 4 - lewo
	int kierunek_w_buforze; // 1 - g�ra, 2 - lewo, 3 - d�, 4 - lewo
							// kierunek w kt�rym p�jdzie kiedy bedzie mia� tak� mo�liwo��


};
