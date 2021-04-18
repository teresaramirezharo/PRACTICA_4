#include "Disparo.h"
#include "freeglut.h"

Disparo::Disparo()
{
	//Valores iniciales
	//rojo = verde = azul = 0; //blanco
	radio = 0.25f;
	aceleracion.y = aceleracion.x = 0; //no afectado por gravedad
	velocidad.x = 0; //solo velocidad vertical
	velocidad.y = 2; //velocidad del disparo
	posicion_inicial.x = -5.0f;
	posicion_inicial.y = 0.0f;
}

void Disparo::dibuja()
{
	glColor3f(0.0f, 1.0f, 1.0f);
	glPushMatrix();
	glTranslatef(posicion.x, posicion.y, 0);
	glutSolidSphere(radio, 20, 20);
	glPopMatrix();

	//estela
	glColor3f(0.0f, 1.0f, 1.0f);
	glBegin(GL_LINES);
	glVertex2d(posicion_inicial.x, posicion_inicial.y);
	glVertex2d(posicion.x, posicion.y);
	glEnd();
}

void Disparo::mueve(float t)
{
	posicion.x = posicion.x + velocidad.x * t + 0.5f * aceleracion.x * t * t;
	posicion.y = posicion.y + velocidad.y * t + 0.5f * aceleracion.y * t * t;
	velocidad.x = velocidad.x + aceleracion.x * t;
	velocidad.y = velocidad.y + aceleracion.y * t;
}

void Disparo::setPos(float ix, float iy)
{
	posicion.x = ix;
	posicion.y = iy;
}
