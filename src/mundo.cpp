#include "mundo.h"



mundo::mundo()
{
}


mundo::~mundo()
{
}

void mundo::mueve()
{
	mario.mover(0.25f);
	x_ojo = mario.Getx() - 3.0f;
	y_ojo = mario.Gety();
	interaccion2::colision(mario, suelo);
	interaccion2::colision(mario, pared);
	interaccion2::colision(champi,suelo);
	champi.mover(0.25f);
	

}
void mundo::dibuja()
{
	gluLookAt(x_ojo, 0, 30,  // posicion del ojo
		x_ojo, 0, 0.0, //NOTESE QUE HEMOS CAMBIADO ESTO     
		0.0, 1.0, 0.0); //PARA MIRAR AL CENTRO DE LA ESCENA   
	mario.dibuja();
	suelo.dibuja();
	bloque.dibuja();
	pared.dibuja();
	champi.dibuja();

}

void mundo::inicializa()
{
	x_ojo = 0;
	y_ojo = 0;

	bloque.SetColor(255, 0, 0);
	bloque.SetLado(1.0f);
	bloque.SetPos(5.0f, 5.0f);

	champi.SetColor(255, 255, 255);
	champi.SetPos(4, 3);
	champi.SetVel(0.5f, 0);
	mario.SetColor(0, 255, 0);
	mario.SetPos(10.0f, 5.0f);

	suelo.SetColor(0, 0, 255);
	suelo.SetPos(0, 0);
	suelo.SetAncho(100);
	suelo.SetAlto(3);
	suelo.inicializa();

	pared.SetColor(255, 255, 0);
	pared.SetPos(15, 3);
	pared.SetAncho(3);
	pared.SetAlto(10);
	pared.inicializa();

	

}
void mundo::teclaEspecial(unsigned char key)
{
	switch (key)
	{
	case GLUT_KEY_LEFT:
		mario.SetVel(-1.0f, 0.0f);
		break;
	case GLUT_KEY_RIGHT:
		mario.SetVel(1.0f, 0.0f);
		break;
	case GLUT_KEY_UP:
		mario.SetVel(0.0f, 9.0f);
		break;
	}
}