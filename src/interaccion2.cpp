#include "interaccion2.h"



interaccion2::interaccion2()
{
}


interaccion2::~interaccion2()
{
}
void interaccion2::colision(personaje_basico1 & p, plataforma & a)
{
	if (p.posicion.x > a.origen.x && p.posicion.x < (a.origen.x + a.ancho))
	{
		if (p.posicion.y <= (a.origen.y + a.alto))
		{p.posicion.y = (a.origen.y + a.alto);
			//p.velocidad.y = 0;
		}
	}
	if (p.posicion.y > a.origen.y && p.posicion.y < (a.origen.y + a.alto))
	{
		if (p.posicion.x + 0.5 >= a.origen.x && p.posicion.x + 0.5 < a.origen.x + a.ancho)
		{p.posicion.x = a.origen.x - 0.5;
			//p.velocidad.x = 0;
		}
		if (p.posicion.x <= a.origen.x + a.ancho && p.posicion.x > a.origen.x)
		{	p.posicion.x = a.origen.x + a.ancho;
		//p.velocidad.x = 0;
	}
	}

}
