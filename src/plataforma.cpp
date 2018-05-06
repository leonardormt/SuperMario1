#include "plataforma.h"



plataforma::plataforma()
{
}


plataforma::~plataforma()
{
}

void plataforma::dibuja()
{
	glDisable(GL_LIGHTING);
	glColor3ub(rojo, verde, azul);
	glBegin(GL_POLYGON);
	glVertex3d(arist_izq.limite1.x, arist_izq.limite1.y, 10);
	glVertex3d(arist_izq.limite2.x, arist_izq.limite2.y, 10);
	glVertex3d(arist_der.limite2.x, arist_der.limite2.y, -10);
	glVertex3d(arist_der.limite1.x, arist_der.limite1.y, -10);
	glEnd();
	glEnable(GL_LIGHTING);
}


