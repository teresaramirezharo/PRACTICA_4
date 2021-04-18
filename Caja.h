#pragma once
#include "Pared.h"

class Caja
{
public:
	unsigned char rojo;
	unsigned char verde;
	unsigned char azul;

	Pared suelo;
	Pared techo;
	Pared pared_izq;
	Pared pared_dcha;

	Caja();

	void dibuja();

	virtual ~Caja() {}
};

