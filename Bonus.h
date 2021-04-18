#pragma once
#include "Vector2D.h"
class Bonus
{
public:

	float lado;

	Vector2D posicion;
	Vector2D velocidad;
	Vector2D aceleracion;

	Bonus(); //valores iniciales

	void dibuja();
	void mueve(float t);
	void setPos(float ix, float iy);
	
	virtual ~Bonus() {}
};

