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
}

void Disparo::dibuja()
{
	glColor3f(0.0f, 1.0f, 1.0f);
	glPushMatrix();
	glTranslatef(posicion.x, posicion.y, 0);
	glutSolidSphere(radio, 20, 20);
	glPopMatrix();

	//estela
	glBegin(GL_POLYGON);
	glVertex2d(-5.0f,0.0f); 
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
