#include "bloque1.h"



bloque1::bloque1()
{
}


bloque1::~bloque1()
{
}

void bloque1::dibuja()
{

	glColor3ub(rojo, verde, azul);
	glTranslatef(posicion.x, posicion.y, 0);
	glutSolidCube(lado);
	glTranslatef(-posicion.x, -posicion.y, 0);
}