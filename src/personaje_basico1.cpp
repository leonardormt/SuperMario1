#include "personaje_basico1.h"



personaje_basico1::personaje_basico1()
{
	velocidad.x = 0;
	velocidad.y = 0;
	aceleracion.x = 0;
	aceleracion.y = 0;
	altura = 1;


}


personaje_basico1::~personaje_basico1()
{
}
void personaje_basico1::dibuja()
{
	glDisable(GL_LIGHTING);
	glColor3ub(rojo, verde, azul);
	glBegin(GL_POLYGON);
	glVertex3d(posicion.x, posicion.y, 0);
	glVertex3d(posicion.x, posicion.y + altura, 0);
	glVertex3d(posicion.x+0.5, posicion.y + altura, 0);
	glVertex3d(posicion.x +0.5, posicion.y, 0);
	glEnd();
	glEnable(GL_LIGHTING);
}