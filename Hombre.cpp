#include "Hombre.h"
#include "freeglut.h"
#include "esfera.h"

Hombre::Hombre()
{
	//datos iniciales
	rojo = verde = azul = 255; //blanco
	altura = 1.8f;
	aceleracion.y = aceleracion.x = 0; //no afectado por gravedad
	velocidad.x = velocidad.y = 0;

}
void Hombre::dibuja()
{
	
	//cabeza
	glPushMatrix();
	glColor3f(1.0f, 0.0f, 0.0f);
	glTranslatef(0, 2.5, 0);
	glTranslatef(posicion.x, posicion.y, 0);
	glutSolidSphere(0.7, 20, 20);
	glTranslatef(-posicion.x, -posicion.y, 0);
	//cuerpo
	glTranslatef(0, -0.7, 0);
	glTranslatef(posicion.x, posicion.y, 0);
	glutSolidCube(0.8);
	glTranslatef(-posicion.x, -posicion.y, 0);
	glTranslatef(0, -0.8, 0);
	glTranslatef(posicion.x, posicion.y, 0);
	glutSolidCube(0.8);
	glTranslatef(-posicion.x, -posicion.y, 0);
	glPopMatrix();
	

}

void Hombre::mueve(float t)
{
	posicion.x = posicion.x + velocidad.x * t + 0.5f * aceleracion.x * t * t;
	posicion.y = posicion.y + velocidad.y * t + 0.5f * aceleracion.y * t * t;
	velocidad.x = velocidad.x + aceleracion.x * t;
	velocidad.y = velocidad.y + aceleracion.y * t;
}