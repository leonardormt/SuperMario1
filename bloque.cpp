#include "bloque.h"



bloque::bloque()
{
}


bloque::~bloque()
{
}

void bloque::dibuja()
{

	glColor3ub(rojo, verde, azul);
	glTranslatef(posicion.x, posicion.y, 0);
	glutSolidCube(lado);
	glTranslatef(-posicion.x, -posicion.y, 0);
}
