#pragma once
#include "Vector2D.h"

class Disparo
{
public:

	float radio;
	unsigned char rojo;
	unsigned char verde;
	unsigned char azul;

	Vector2D posicion;
	Vector2D velocidad;
	Vector2D aceleracion;

	Disparo();

	void dibuja();
	void mueve(float t);
	void setPos(float ix, float iy);

	virtual ~Disparo() {}
};

