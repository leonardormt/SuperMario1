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

void plataforma::SetColor(unsigned char r, unsigned char g, unsigned char b)
{
	rojo = r;
	verde = g;
	azul = b;
}

void plataforma::SetPos(float x1, float y1)
{
	origen.x = x1;
	origen.y = y1;
}

void plataforma::inicializa()
{
	arist_izq.limite1 = origen;
	arist_izq.limite1.x = arist_izq.limite2.x;
	arist_izq.limite2.y = arist_izq.limite1.y + alto;
	arist_der.limite2.y = arist_izq.limite2.y;
	arist_der.limite1.y = arist_izq.limite1.y;
	arist_der.limite2.x = arist_izq.limite2.x + ancho;
	arist_der.limite1.x = arist_der.limite2.x;
}

