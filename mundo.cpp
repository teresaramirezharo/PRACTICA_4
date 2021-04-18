#include "freeglut.h"
#include "mundo.h"
#include "math.h"
#include "esfera.h"
#include "caja.h"
#include "bonus.h"


void Mundo::dibuja()
{
	gluLookAt(x_ojo, y_ojo, z_ojo,
		0.0, y_ojo, 0.0, //NOTESE QUE HEMOS CAMBIADO ESTO
		0.0, 1.0, 0.0); //PARA MIRAR AL CENTRO DE LA ESCENA
	esfera.dibuja();
	caja.dibuja();
	hombre.dibuja();
	disparo.dibuja();
	plataforma.dibuja();
	bonus.dibuja();
}

void Mundo::mover()
{
	hombre.mueve(0.025f);
	esfera.mueve(0.025f);
	bonus.mueve(0.025f);
	disparo.mueve(0.025f);
}

void Mundo::tecla(unsigned char key)
{
	if (key == 'a')
		hombre.posicion.x -= 0.1f;
	if (key == 'd')
		hombre.posicion.x += 0.1f;

}

void Mundo::inicializa()
{
	x_ojo = 0;
	y_ojo = 7.5;
	z_ojo = 30;

	esfera.setColor(0, 0, 255);
	esfera.setRadio(1.5f);
	esfera.setPos(2, 4);

	bonus.setPos(5.0f, 5.0f);

	disparo.setPos(-5.0f, 0.0f);

	plataforma.setLimits(-5.0f, 5.0f, 9.0f, 9.0f);
	plataforma.setColor(255, 255, 255);
}
