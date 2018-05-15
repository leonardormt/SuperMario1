#include "malo_basico1.h"



malo_basico1::malo_basico1(float t)
{
	tamaño = t;
}


malo_basico1::~malo_basico1()
{
}

void malo_basico1::dibuja()
{
	glColor3ub(rojo, verde, azul);
	glTranslatef(posicion.x, posicion.y, 0);
	glutSolidCube(tamaño);
	glTranslatef(-posicion.x, -posicion.y, 0);
}
