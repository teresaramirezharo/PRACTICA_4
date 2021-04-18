#include "Caja.h"
#include "freeglut.h"

Caja::Caja()
{
	suelo.setColor(0, 100, 0);
	techo.setColor(0, 100, 0);
	pared_dcha.setColor(0, 150, 0);
	pared_izq.setColor(0, 150, 0);

	pared_izq.setLimits(-10.0f, -10.0f, 0.0f, 15.0f);
	techo.setLimits(-10.0f, 10.0f, 15.0f, 15.0f);
	pared_dcha.setLimits(10.0f, 10.0f, 15.0f, 0.0f);
	suelo.setLimits(10.0f, -10.0f, 0.0f, 0.0f);
}

void Caja::dibuja()
{
	glColor3ub(rojo, verde, azul);

	suelo.dibuja();
	techo.dibuja();
	pared_izq.dibuja();
	pared_dcha.dibuja();
}

