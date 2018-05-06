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
}
void mundo::dibuja()
{
	mario.dibuja();
	suelo.dibuja();
	bloque.dibuja();

}

void mundo::inicializa()
{
	bloque.SetColor(255, 0, 0);
	bloque.SetLado(5.0f);
	bloque.SetPos(5.0f, 5.0f);

	mario.SetColor(0, 255, 0);
	mario.SetPos(3.0f, 3.0f);

	suelo.SetColor(0, 0, 255);
	suelo.SetPos(0, 0);
	suelo.SetAncho(20);
	suelo.SetAlto(2);
	suelo.inicializa();
	

}
