#include "personaje_basico1.h"



personaje_basico1::personaje_basico1()
{
	velocidad.x = 0;
	velocidad.y = 0;
	aceleracion.x = 0;
	aceleracion.y = 0;


}


personaje_basico1::~personaje_basico1()
{
}
void personaje_basico1::dibuja()
{
	glColor3ub(rojo, verde, azul);
	glTranslatef(posicion.x, posicion.y, 0);
	glutSolidCone(5,altura,20,20);
	glTranslatef(-posicion.x, -posicion.y, 0);
}