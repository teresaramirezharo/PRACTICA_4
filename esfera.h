#pragma once
#include "Vector2D.h"
#include "freeglut.h"

class Esfera
{
private:

	float radio;

	float x; //posición
	float y;

	float vx; //velocidad
	float vy;

	unsigned char rojo;
	unsigned char verde;
	unsigned char azul;

public:
	Vector2D posicion;
	Vector2D velocidad;
	Vector2D aceleracion;

	//despues de los atributos, las funciones
	Esfera();

	void dibuja();
	void mueve(float t);
	void setPos(float ix, float iy);
	void setRadio(float r);
	void setColor(unsigned char r, unsigned char v, unsigned char a);

	virtual ~Esfera() {}
};

