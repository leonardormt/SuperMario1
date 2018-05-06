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

}
void mundo::dibuja()
{
	gluLookAt(x_ojo, y_ojo, 30,  // posicion del ojo
		x_ojo, 0, 0.0, //NOTESE QUE HEMOS CAMBIADO ESTO     
		0.0, 1.0, 0.0); //PARA MIRAR AL CENTRO DE LA ESCENA   
	mario.dibuja();
	suelo.dibuja();
	bloque.dibuja();

}

void mundo::inicializa()
{
	x_ojo = 0;
	y_ojo = 0;

	bloque.SetColor(255, 0, 0);
	bloque.SetLado(1.0f);
	bloque.SetPos(5.0f, 5.0f);

	mario.SetColor(0, 255, 0);
	mario.SetPos(3.0f, 3.0f);

	suelo.SetColor(0, 0, 255);
	suelo.SetPos(0, 0);
	suelo.SetAncho(100);
	suelo.SetAlto(3);
	suelo.inicializa();
	

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
	}
}