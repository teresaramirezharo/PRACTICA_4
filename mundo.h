#include "Caja.h"
#include "Hombre.h"
#include "Esfera.h"
#include "Bonus.h"
#include "Disparo.h" 

class Mundo
{
public:
	double x_ojo;
	double y_ojo;
	double z_ojo;
	double d;
	double theta;

	Disparo disparo;
	Esfera esfera;
	Hombre hombre;
	Caja caja;
	Bonus bonus;
	Pared plataforma;

	void dibuja();
	void mover();
	void inicializa();
	void tecla(unsigned char key);
};


