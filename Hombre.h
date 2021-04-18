#pragma once
#include "Vector2D.h"
class Hombre
{
public:
	
	unsigned char rojo;
	unsigned char verde;
	unsigned char azul;
	float altura;

	Vector2D posicion;
	Vector2D velocidad;
	Vector2D aceleracion; 

	Hombre();

	void dibuja();
	void mueve(float t);

	virtual ~Hombre() {}
};

