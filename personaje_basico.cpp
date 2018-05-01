#include "personaje_basico.h"



personaje_basico::personaje_basico()
{
}


personaje_basico::~personaje_basico()
{
}

void personaje_basico::dibuja()
{
	glColor3ub(rojo, verde, azul);
	glTranslatef(posicion.x, posicion.y, 0);
	glutSolidCone(5, altura, 20, 20);
	glTranslatef(-posicion.x, -posicion.y, 0);
}
